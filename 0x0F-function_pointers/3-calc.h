#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @e: The function associated
*/
typedef struct op
{
	char *op;
	int (*e)(int q, int d);
} op_t;


int op_add(int q, int d);
int op_sub(int q, int d);
int op_mul(int q, int d);
int op_div(int q, int d);
int op_mod(int q, int d);

int (*get_op_func(char *z))(int, int);

#endif
