/*
 * (C) Copyright 2001-2003 Diomidis Spinellis.
 *
 * Encapsulates a (user interface) function query
 *
 * $Id: funquery.cpp,v 1.6 2004/07/27 15:46:43 dds Exp $
 */

#include <map>
#include <string>
#include <deque>
#include <vector>
#include <stack>
#include <iterator>
#include <iostream>
#include <fstream>
#include <list>
#include <set>
#include <functional>
#include <algorithm>		// set_difference
#include <cassert>
#include <sstream>		// ostringstream
#include <cstdio>		// perror, rename
#include <cstdlib>		// atoi

#include "swill.h"
#include "regex.h"
#include "getopt.h"

#include "cpp.h"
#include "ytab.h"
#include "attr.h"
#include "metrics.h"
#include "fileid.h"
#include "tokid.h"
#include "token.h"
#include "ptoken.h"
#include "fchar.h"
#include "error.h"
#include "pltoken.h"
#include "macro.h"
#include "pdtoken.h"
#include "eclass.h"
#include "debug.h"
#include "ctoken.h"
#include "type.h"
#include "stab.h"
#include "license.h"
#include "fdep.h"
#include "version.h"
#include "call.h"
#include "fcall.h"
#include "mcall.h"
#include "query.h"
#include "funquery.h"

// Construct an object based on URL parameters
FunQuery::FunQuery(FILE *of, bool icase, Attributes::size_type cp, bool e, bool r) :
	Query(!e, r, true),
	current_project(cp)
{
	if (lazy)
		return;

	valid = true;

	// Query name
	char *qname = swill_getvar("n");
	if (qname && *qname)
		name = qname;

	// Type of boolean match
	char *m;
	if (!(m = swill_getvar("match"))) {
		fprintf(of, "Missing value: match");
		valid = return_val = false;
		lazy = true;
		return;
	}
	match_type = *m;

	cfun = !!swill_getvar("cfun");
	macro = !!swill_getvar("macro");
	writable = !!swill_getvar("writable");
	ro = !!swill_getvar("ro");
	pscope = !!swill_getvar("pscope");
	fscope = !!swill_getvar("fscope");
	defined = !!swill_getvar("defined");
	(void)swill_getargs("i(ncallers)|i(ncallerop)", &ncallers, &ncallerop);

	exclude_fnre = !!swill_getvar("xfnre");
	exclude_fure = !!swill_getvar("xfure");
	exclude_fdre = !!swill_getvar("xfdre");

	// Compile regular expression specs
	if (!compile_re(of, "Function name", "fnre", fnre, match_fnre, str_fnre) ||
	    !compile_re(of, "Calling function name", "fure", fure, match_fure, str_fure) ||
	    !compile_re(of, "Called function name", "fdre", fdre, match_fdre, str_fdre) ||
	    !compile_re(of, "Filename", "fre", fre, match_fre, str_fre, (icase ? REG_ICASE : 0)))
	    	return;
}

// Return the query's parameters as a URL
string
FunQuery::url() const
{
	string r("match=");
	r += Query::url(string(1, match_type));
	if (cfun)
		r += "&cfun=1";
	if (macro)
		r += "&macro=1";
	if (writable)
		r += "&writable=1";
	if (ro)
		r += "&ro=1";
	if (pscope)
		r += "&pscope=1";
	if (fscope)
		r += "&fscope=1";
	if (defined)
		r += "&defined=1";
	if (match_fnre)
		r += "&fnre=" + Query::url(str_fnre);
	if (match_fure)
		r += "&fure=" + Query::url(str_fure);
	if (match_fdre)
		r += "&fdre=" + Query::url(str_fdre);
	if (match_fre)
		r += "&fre=" + Query::url(str_fre);
	if (exclude_fnre)
		r += "&xfnre=1";
	if (exclude_fure)
		r += "&xfure=1";
	if (exclude_fdre)
		r += "&xfdre=1";
	if (ncallerop != ec_ignore) {
		ostringstream varname;

		varname << "&ncallers=" << ncallers;
		varname << "&ncallerop=" << ncallerop;
		r += varname.str();
	} else
		r += "&ncallerop=0";
	if (name.length())
		r += "&n=" + Query::url(name);
	return r;
}

// Evaluate the object's identifier query against i
// return true if it matches
bool
FunQuery::eval(const Call *c)
{
	if (lazy)
		return return_val;

	Eclass *ec = c->get_tokid().get_ec();
	if (current_project && !ec->get_attribute(current_project))
		return false;

	bool add;
	switch (match_type) {
	case 'Y':	// anY match
		add = false;
		add = (add || (cfun && c->is_cfun()));
		add = (add || (macro && c->is_macro()));
		add = (add || (writable && !ec->get_attribute(is_readonly)));
		add = (add || (ro && ec->get_attribute(is_readonly)));
		add = (add || (pscope && !c->is_file_scoped()));
		add = (add || (fscope && c->is_file_scoped()));
		add = (add || (defined && c->is_defined()));
		break;
	case 'L':	// alL match
		add = true;
		add = (add && (!cfun || c->is_cfun()));
		add = (add && (!macro || c->is_macro()));
		add = (add && (!writable || !ec->get_attribute(is_readonly)));
		add = (add && (!ro || ec->get_attribute(is_readonly)));
		add = (add && (!pscope || !c->is_file_scoped()));
		add = (add && (!fscope || c->is_file_scoped()));
		add = (add && (!defined || c->is_defined()));
		break;
	case 'E':	// excludE match
		add = true;
		add = (add && (!cfun || !c->is_cfun()));
		add = (add && (!macro || !c->is_macro()));
		add = (add && (!writable || ec->get_attribute(is_readonly)));
		add = (add && (!ro || !ec->get_attribute(is_readonly)));
		add = (add && (!pscope || c->is_file_scoped()));
		add = (add && (!fscope || !c->is_file_scoped()));
		add = (add && (!defined || !c->is_defined()));
		break;
	case 'T':	// exactT match
		add = true;
		add = (add && (cfun == c->is_cfun()));
		add = (add && (macro == c->is_macro()));
		add = (add && (writable == !ec->get_attribute(is_readonly)));
		add = (add && (ro == ec->get_attribute(is_readonly)));
		add = (add && (pscope == !c->is_file_scoped()));
		add = (add && (fscope == c->is_file_scoped()));
		add = (add && (defined == c->is_defined()));
		break;
	}
	if (!add)
		return false;

	if (ncallerop && !Query::apply(ncallerop, c->get_num_caller(), ncallers))
		return false;

	int retval = exclude_fnre ? 0 : REG_NOMATCH;
	if (match_fnre && regexec(&fnre, c->get_name().c_str(), 0, NULL, 0) == retval)
		return false;
	if (match_fre && regexec(&fre, c->get_fileid().get_path().c_str(), 0, NULL, 0) != 0)
			return false;	// No match found
	Call::const_fiterator_type c2;
	if (match_fdre) {
		for (c2 = c->call_begin(); c2 != c->call_end(); c2++)
			if (regexec(&fdre, (*c2)->get_name().c_str(), 0, NULL, 0) == 0)
				if (exclude_fdre)
					return false;
				else
					break;
		if (!exclude_fdre && c2 == c->call_end())
			return false;
	}
	if (match_fure) {
		for (c2 = c->caller_begin(); c2 != c->caller_end(); c2++)
			if (regexec(&fure, (*c2)->get_name().c_str(), 0, NULL, 0) == 0)
				if (exclude_fure)
					return false;
				else
					break;
		if (!exclude_fure && c2 == c->caller_end())
			return false;
	}
	return true;
}