/* Author: Glen MacLachlan, bindatype@gmail.com
 *
 */



#include <stdio.h>
#include "usage.h"

void
usage()
{
printf(" \n \
DESCRIPTION\n \
        Computes mean. Input in the form of ascii numbers with one, two, or three columns.\n ");
printf(" \n \
        Input is supplied in the form of pipes or redirection. This can be accomplished via:\n \
          cat INPUTFILE | get_mean\n \
        or \n \
          get_mean < INPUTFILE\n  ");
printf("\n \
        index information and the second column holds the transformed signal. \n ");
printf("\n \
OPTIONS\n \
\n ");
printf("\n \
AUTHOR\n \
        Written by Glen Alan MacLachlan.\n ");
printf("\n \
REPORTING BUGS\n \
        Report bugs to <bindatype@gmail.com>\n \
\n \
COPYRIGHT\n \
       Copyright © 2010 Glen Alan MacLachlan.  License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\n \
       This is free software: you are free to change and redistribute it.  There is NO WARRANTY, to the extent permitted by law.\n \
\n  ");
}

void
version()
{
puts ("get_mean, 2.0.04-10");
puts ("Copyright (C) 2010, Glen Alan MacLachlan, <bindatype@gmail.com>");
puts ("License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.");
puts ("This is free software; see the source for copying conditions.  There is NO");
puts ("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.");
}
