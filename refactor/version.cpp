#include <string>
using namespace std;
#include "version.h"
char Version::revision[] = "$Revision: 2.1 $";
char Version::date[] = "$Date: 2005/05/14 14:12:23 $";
char *Version::ident[] = {
"$" "Id:" " Makefile 1.69 2005/05/14 13:42:21 dds Exp dds $",
"$" "Id:" " attr.cpp 1.16 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " attr.h 1.15 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " color.cpp 1.10 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " cscout.cpp 1.118 2005/05/14 13:43:44 dds Exp $",
"$" "Id:" " ctoken.cpp 1.2/07/23 06:55:38 dds Exp $",
"$" "Id:" " ctoken.h 1.5 20:55:38 dds Exp $",
"$" "Id:" " debug.cpp 1.3 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " debug.h 1.7 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " defs.h 1.13 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " des.c 1.12 2005/05/14 13:51:12 dds Exp $",
"$" "Id:" " des.h 1.3 2003/05/17 07:38:32 dds Exp $",
"$" "Id:" " eclass.cpp 1.27 2005/05/14 06:50:57 dds Exp $",
"$" "Id:" " eclass.h 1.21 2004/07/25 14:11:24 dds Exp $",
"$" "Id:" " engine.cpp 14/07/23 06:55:38 dds Exp $",
"$" "Id:" " error.cpp 1.14 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " error.h 1.5 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " eval.y 1.12 2004/07/31 18:08:38 dds Exp $",
"$" "Id:" " fchar.cpp 1.30 2004/07/30 17:19:03 dds Exp $",
"$" "Id:" " fchar.h 1.12 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " fileid.cpp 1.33 2004/08/10 10:08:15 dds Exp $",
"$" "Id:" " fileid.h 1.26 2004/08/01 12:51:14 dds Exp $",
"$" "Id:" " id.h 1.3 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " incs.h 1.2 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " license.c 1.16 2005/05/10 22:06:21 dds Exp $",
"$" "Id:" " license.h 1.9 2005/05/10 21:56:48 dds Exp $",
"$" "Id:" " macro.cpp 1.30 2005/05/10 21:11:10 dds Exp $",
"$" "Id:" " macro.h 1.12 2004/07/25 12:18:01 dds Exp $",
"$" "Id:" " metrics.cpp 1.14 2004/10/10 10:29:48 dds Exp $",
"$" "Id:" " metrics.h 1.12 2004/07/30 17:19:03 dds Exp $",
"$" "Id:" " defs.h 1.9 2002/09/05 16:51:23 dds Exp $",
"$" "Id:" " incs.h 1.1 2002/09/05 16:43:58 dds Exp $",
"$" "Id:" " obfuscate.cpp 1.4 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " parse.y 1.97 2005/05/04 14:44:09 dds Exp $",
"$" "Id:" " pdtoken.cpp 1.97 2005/05/14 07:53:18 dds Exp $",
"$" "Id:" " pdtoken.h 1.28 2004/07/30 17:19:03 dds Exp $",
"$" "Id:" " pltoken.cpp 1.13 2005/05/10 21:10:17 dds Exp $",
"$" "Id:" " pltoken.h 1.26 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " ptoken.cpp 1.11 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " ptoken.h 1.10 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " simple_cpp.cpp 1.15 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " stab.cpp 1.36 2004/08/07 21:49:01 dds Exp $",
"$" "Id:" " stab.h 1.19 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " tchar.cpp 1.14 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " tchar.h 1.6 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " tclfuns.cpp 1.8 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " token.cpp 1.20 2004/08/07 21:49:01 dds Exp $",
"$" "Id:" " token.h 1.15 2004/08/07 21:49:01 dds Exp $",
"$" "Id:" " tokid.cpp 1.24 2005/05/14 06:50:57 dds Exp $",
"$" "Id:" " tokid.h 1.19 2005/05/14 13:42:21 dds Exp $",
"$" "Id:" " tokmap.cpp 1.3 2002/09/17 10:53:02 dds Exp $",
"$" "Id:" " tokmap.h 1.2 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " tokname.pl 1.7 2003/08/21 19:50:05 dds Exp $",
"$" "Id:" " type.cpp 1.40 2004/07/24 10:44:23 dds Exp $",
"$" "Id:" " type.h 1.32 2004/07/25 12:46:11 dds Exp $",
"$" "Id:" " type2.h 1.20 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " defs.h 1.9 2002/09/05 16:51:23 dds Exp $",
"$" "Id:" " webmap.cpp 1.21 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " webmap.cpp 1.21 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " incs.h 1.1 2002/09/05 16:43:58 dds Exp $",
"$" "Id:" " workdb.cpp 1.14 2005/05/14 12:44:59 dds Exp $",
"$" "Id:" " ytoken.h 1.8 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " prjcomp.pl 1.13 2003/10/13 07:46:16 dds Exp $",
"$" "Id:" " version.h 1.4 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " getopt.c 1.3 2004/07/24 07:26:53 dds Exp $",
"$" "Id:" " getopt.h 1.3 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " fdep.cpp 1.5 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " fdep.h 1.5 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " fcall.cpp 1.10 2004/08/07 21:49:01 dds Exp $",
"$" "Id:" " fcall.h 1.12 2004/07/27 11:14:28 dds Exp $",
"$" "Id:" " mcall.h 1.6 2004/08/07 21:49:01 dds Exp $",
"$" "Id:" " call.cpp 1.5 2004/08/07 21:49:01 dds Exp $",
"$" "Id:" " call.h 1.10 2004/08/07 21:49:01 dds Exp $",
"$" "Id:" " idquery.cpp 1.6 2005/05/10 22:09:54 dds Exp $",
"$" "Id:" " idquery.h 1.5 2004/08/08 17:58:49 dds Exp $",
"$" "Id:" " query.cpp 1.5 2005/05/10 22:09:54 dds Exp $",
"$" "Id:" " query.h 1.4 2004/07/27 15:23:21 dds Exp $",
"$" "Id:" " funquery.cpp 1.10 2005/05/10 22:09:54 dds Exp $",
"$" "Id:" " funquery.h 1.4 2004/07/29 14:33:53 dds Exp $",
"$" "Id:" " logo.h 1.1 2004/07/30 09:58:33 dds Exp $",
"$" "Id:" " ytoken.h 1.8 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " workdb.h 1.1 2005/05/14 13:18:34 dds Exp $",
0 };
