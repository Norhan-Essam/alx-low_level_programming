#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * using two input parametors
 *
 * @a: input parametor 1
 * @b: input parametor 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
