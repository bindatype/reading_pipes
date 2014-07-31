//Send questions to Glen Alan MacLachlan
// maclach@gwu.edu

#ifndef __GET_DATA_H__
#define __GET_DATA_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
  int COLS,ROWS,SIZE;
  double *input_buf;
};

void get_data(FILE * ,struct data * );
void stack_columns(double *, double *, double *, struct data);
void remove_trailing_blanks(char *);

#endif
