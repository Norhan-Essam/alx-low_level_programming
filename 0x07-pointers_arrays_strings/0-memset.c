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
	unsigned int i;

	for (i = 0; i < n; i++);
	{
		s[i] = a;
	}
	return (s);
}
