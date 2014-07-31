//Send questions to Glen Alan MacLachlan
// maclach@gwu.edu

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Include this head file to read data with the get_data() function. 
#include "get_data.h"

int main (int argc, char **argv)
{

/* 
 Create a data struct and read in from STDIN stream. 
 This structure provides:
  int COLS,ROWS,SIZE;
  double *input_buf;
*/

  struct data _data;
  get_data(stdin,&_data);


  for ( int i = 0; i < _data.SIZE ; i++)
  {
   printf(" %d ",(int) _data.input_buf[i]); 
   if ( 0 == (i+1) % _data.COLS  ) 
     printf(" \n "); 
  }
  printf("Rows: %d; Cols: %d; Size: %d\n",_data.ROWS, _data.COLS, _data.SIZE);

// free data buffer
  free( _data.input_buf ); 

  return 0;
}
