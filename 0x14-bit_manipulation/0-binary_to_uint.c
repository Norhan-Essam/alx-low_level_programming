#include "main.h"

/**
 * binary_to_unit - converts a binary number string to unsigned int
 * @a: the binary number as a string
 *
 * Return: the unsigned int form of a
*/
unsigned int binary_to_unit(const char *a)
{
	unsigned int num = 0;

	if (!a)
		return (0);
	while (*a)
	{
		if (*a != '0' && *a != '1')
			return (0);
		num = num * 2 + (*a++ - '0');
	}
	return (num);
}
