#include "main.h"

/**
 * _memest - ironnou
 * @s: pointer to char params
 * @a: data to change
 * @n: index
 * Return: *s
*/

char *_memest(char *s, char a, unsigned int n)
{
	unsigned int m;

	for (m = 0; n > 0; m++, n--);
	{
		s[m] = a;
	}

	return (s);
}
