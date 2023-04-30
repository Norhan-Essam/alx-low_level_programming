#include "3-calc.h"

/**
 * op_add - adds two integers
 * @q: the first int
 * @d: the second int
 *
 * Return: the sum
*/
int op_add(int q, int d)
{
	return (q + d);
}

/**
 * op_sub - subtracts two integers
 * @q: the first int
 * @d: the second int
 *
 * Return: the difference
*/
int op_sub(int q, int d)
{
	return (q - d);
}

/**
 * op_div - divides two integers
 * @q: the first int
 * @d: the second int
 *
 * Return: the quotient
*/
int op_div(int q, int d)
{
	return (q / d);
}

/**
 * op_mod - modulo two integers
 * @q: the first int
 * @d: the second int
 *
 * Return: the remainder
*/
int op_mod(int q, int d)
{
	return (q % d);
}
