test_read.c gives a simple example of implementing the get_data tool. 

Compiling:
	make
	sudo make install

Example examples:
examples/onecol.dat 	1000x1
examples/twocol.dat	1000x2
examples/threecol.dat	1000x3
examples/tencol.dat	1000x10

Usage:
cat examples/tencol.dat | bin/test_read
or 
bin/test_read < examples/twocol.dat

Calling from C/C++

...
#include "get_data.h"

  struct data _data;
  get_data(stdin,&_data);
...


