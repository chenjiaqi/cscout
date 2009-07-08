#include <string>
using namespace std;
#include "version.h"
char Version::revision[] = "$Revision: 2.7 $";
char Version::date[] = "$Date: 2009/07/08 08:20:05 $";
const char *Version::ident[] = {
"$" "Id:" " makefile 1.154 2009/06/22 17:50:44 dds Exp $",
"$" "Id:" " License.txt,v 1.1 2009/01/15 17:13:07 dds Exp $",
"$" "Id:" " attr.cpp 1.21 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " attr.h 1.20 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " cpp.h 1.7 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " cscout.cpp 1.226 2009/04/10 08:19:57 dds Exp $",
"$" "Id:" " ctoken.cpp 1.38 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " ctoken.h 1.7 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " debug.cpp 1.5 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " debug.h 1.10 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " defs.h 1.15 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " des.c 1.14 2006/09/21 12:47:18 dds Exp $",
"$" "Id:" " des.h 1.3 2003/05/17 07:38:32 dds Exp $",
"$" "Id:" " eclass.cpp 1.34 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " eclass.h 1.25 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " error.cpp 1.21 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " error.h 1.9 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " eval.y 1.18 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fchar.cpp 1.43 2009/03/13 13:21:48 dds Exp $",
"$" "Id:" " fchar.h 1.24 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fileid.cpp 1.51 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fileid.h 1.44 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " id.h 1.4 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " incs.h 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " macro.cpp 1.59 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " macro.h 1.20 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " metrics.cpp 1.32 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " metrics.h 1.33 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " mscdefs.h,v 1.1 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " mscincs.h,v 1.1 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " obfuscate.cpp 1.15 2009/03/13 16:10:54 dds Exp $",
"$" "Id:" " parse.y 1.150 2009/03/13 13:21:48 dds Exp $",
"$" "Id:" " pdtoken.cpp 1.122 2009/03/14 16:53:22 dds Exp $",
"$" "Id:" " pdtoken.h 1.34 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " pltoken.cpp 1.17 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " pltoken.h 1.37 2009/03/13 13:21:48 dds Exp $",
"$" "Id:" " ptoken.cpp 1.17 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " ptoken.h 1.13 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " simple_cpp.cpp 1.18 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " stab.cpp 1.52 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " stab.h 1.31 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " tchar.cpp 1.16 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " tchar.h 1.8 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " tclfuns.cpp 1.11 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " token.cpp 1.30 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " token.h 1.23 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " tokid.cpp 1.30 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " tokid.h 1.27 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " tokmap.cpp 1.4 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " tokmap.h 1.5 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " tokname.pl 1.9 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " type.cpp 1.61 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " type.h 1.47 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " type2.h 1.34 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " wdefs.h,v 1.1 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " wincs.h,v 1.1 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " workdb.cpp 1.51 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " ytoken.h 1.14 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " version.h 1.7 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " getopt.c 1.4 2005/07/15 17:35:15 dds Exp $",
"$" "Id:" " getopt.h 1.4 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " fdep.cpp 1.13 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fdep.h 1.12 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fcall.cpp 1.22 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fcall.h 1.16 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " mcall.h 1.9 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " call.cpp 1.25 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " call.h 1.28 2009/04/01 08:00:26 dds Exp $",
"$" "Id:" " idquery.cpp 1.19 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " idquery.h 1.17 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " query.cpp 1.12 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " query.h 1.13 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " funquery.cpp 1.23 2009/03/13 13:21:48 dds Exp $",
"$" "Id:" " funquery.h 1.19 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " logo.h 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " ytoken.h 1.14 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " workdb.h 1.6 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " obfuscate.h,v 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " dlstubs.c 1.1 2005/05/18 15:56:28 dds Exp $",
"$" "Id:" " sql.cpp 1.5 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " sql.h 1.10 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fifstream.h 1.5 2009/04/10 08:19:57 dds Exp $",
"$" "Id:" " compiledre.h 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " base64.c 1.2 2005/09/29 09:19:16 dds Exp $",
"$" "Id:" " base64.c 1.2 2005/09/29 09:19:16 dds Exp $",
"$" "Id:" " gdisplay.h 1.20 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " eval.h 1.4 2009/01/27 10:22:10 dds Exp $",
"$" "Id:" " md5.h 1.2 2006/09/20 08:03:48 dds Exp $",
"$" "Id:" " md5.c 1.6 2009/03/13 13:21:48 dds Exp $",
"$" "Id:" " os.cpp 1.4 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " os.h 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " filequery.cpp,v 1.2 2008/09/22 16:25:45 dds Exp $",
"$" "Id:" " filequery.h,v 1.5 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " mquery.h,v 1.7 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " mcall.cpp,v 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " filemetrics.h 1.28 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " funmetrics.h,v 1.16 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " pager.h 1.4 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " pager.cpp 1.6 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " option.cpp 1.17 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " option.h 1.18 2009/03/14 21:34:38 dds Exp $",
"$" "Id:" " filemetrics.cpp 1.30 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " funmetrics.cpp,v 1.19 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " ctconst.cpp,v 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " ctconst.h,v 1.2 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " gdisplay.cpp,v 1.4 2009/01/28 08:41:27 dds Exp $",
"$" "Id:" " globobj.cpp,v 1.2 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " globobj.h,v 1.4 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " html.h,v 1.5 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " html.cpp,v 1.8 2009/01/28 07:52:19 dds Exp $",
"$" "Id:" " dirbrowse.h,v 1.4 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " dirbrowse.cpp,v 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fileutils.cpp,v 1.2 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " fileutils.h,v 1.3 2009/01/15 14:32:57 dds Exp $",
"$" "Id:" " runtest.sh 1.29 2009/01/28 15:54:14 dds Exp $",
"$" "Id:" " csmake.pl 1.21 2009/06/18 21:34:12 dds Exp $",
"$" "Id:" " csmake.pl 1.21 2009/06/18 21:34:12 dds Exp $",
"$" "Id:" " cswc.pl 1.20 2008/12/02 14:04:35 dds Exp $",
"$" "Id:" " style.css,v 1.5 2008/11/16 14:18:27 dds Exp $",
"$" "Id:" " license.c 1.23 2007/07/16 16:50:53 dds Exp $",
"$" "Id:" " license.h 1.12 2008/12/04 15:19:06 dds Exp $",
0 };
