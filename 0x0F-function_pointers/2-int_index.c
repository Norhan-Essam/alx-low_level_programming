#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: the int array
 * @size: the array size
 * @cmf: the compare function
 *
 * Return: the integer index
*/
int int_index(int *array, int size, int (*cmf)(int))
{
	int e = 0;

	if (array && size && cmf)
		while (e < size)
		{
			if (cmf(array[e]))
				return (e);
			e++;
		}
	return (-1);
}
