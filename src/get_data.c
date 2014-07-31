//Send questions to Glen Alan MacLachlan
// maclach@gwu.edu

#include <math.h>
#include <ctype.h>
#include "get_data.h"

void get_data(FILE * stream,struct data *this_struct)
{
  char buf[BUFSIZ];
  const char delims[] = " ,\t,\n";
  char *result = NULL;
  int COLS,ROWS,SIZE;
  double *array = NULL;
 
  ROWS = SIZE = 0;
  while (NULL != fgets(buf,BUFSIZ,stream) )
  { COLS = 0;
    remove_trailing_blanks(buf);   
 
    ++ROWS;
    result = strtok( buf, delims ); 
 
    while( result != NULL ) {
      ++COLS;
      ++SIZE;
      array = realloc(array,SIZE*sizeof(double)); 
      array [SIZE-1] = atof(result) ;
      result = strtok( NULL, delims );
    }
  }

  this_struct->input_buf = array;
  this_struct->COLS = COLS;
  this_struct->ROWS = ROWS;
  this_struct->SIZE = SIZE;
}
void remove_trailing_blanks(char *buf)
{
    char *p;
    p = (buf+strlen(buf));
    while ( 0 != isspace( *(p) ) || '\0' == *p )
    {
        p--;
    }
    *(p+1) = '\0';
}

void stack_columns(double *x_value, 
		double *y_value, 
		double *weight,
		struct data _data){
    if ( 1 == _data.COLS ) {
      for ( int m = 0; m < _data.ROWS; m++ ) {
        x_value[m] = m;
        y_value[m] = _data.input_buf[m];
        weight[m] = sqrt(fabs(y_value[m]));
      }
    } else if ( 2 == _data.COLS ) {
      for ( int m = 0; m < _data.ROWS; m++ ) {
        x_value[m] = _data.input_buf[m*_data.COLS];
        y_value[m] = _data.input_buf[m*_data.COLS+1];
        weight[m] = sqrt(fabs(y_value[m]));
      }
    } else if ( 3 == _data.COLS ) {
      for ( int m = 0; m < _data.ROWS; m++ ) {
        x_value[m] = _data.input_buf[m*_data.COLS];
        y_value[m] = _data.input_buf[m*_data.COLS+1];
        weight[m] = _data.input_buf[m*_data.COLS+2];
      }
    }
}

