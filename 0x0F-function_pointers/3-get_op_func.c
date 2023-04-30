#include "3-calc.h"

/**
 * get_op_func - returns pointer to right op func
 * @z: string operator
 *
 * Return: the right function pointer
*/
int (*get_op_func(char *z))(int, int)
{
	op_t ops[] = {
	 {"+", op_add},
	 {"-", op_sub},
	 {"*", op_mul},
	 {"/", op_div},
	 {"%", op_mod},
	 {NULL, NULL}
};
int i = 0;

while (i < 5)
{
	if (z && z[0] == ops[i].op[0] && !z[1])
		return (ops[i].f);
	i++;
}
return (NULL);
}
