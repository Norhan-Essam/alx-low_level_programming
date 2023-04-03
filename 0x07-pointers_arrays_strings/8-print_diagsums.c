#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array [square]
*/

void print_diagsums(int *a, int size)
{
	int m, s1 = 0, s2 = 0;

	for (m = 0; m < size; m++)
	{
		s1 += a[m];
		s2 += a[size - m - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
