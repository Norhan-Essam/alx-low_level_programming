#include "main.h"

/**
 * binary_to_unit - converts a binary number string to unsigned int
 * @n: the binary number as a string
 *
 * Return: the unsigned int form of n
*/
unsigned int binary_to_unit(const char *n)
{
	unsigned int num = 0;

	if (!n)
		return (0);
	while (*n)
	{
		if (*n != '0' && *n != '1')
			return (0);
		num = num * 2 + (*n++ - '0');
	}
	return (num);
}
