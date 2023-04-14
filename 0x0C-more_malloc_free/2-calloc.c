#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @c: pointer to put the constant
 * @a: constant
 * @m: max bytes to use
 * Return: c
*/

char *_memset(char *c, char a, unsigned int m)
{
	char *ptr = c;

	while (m--)
		*c++ = a;

	return (ptr);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;

	if (size == 0 || nmemb == 0)
		return (NULL);
	n = malloc(sizeof(int) * nmemb);

	if (n == 0)
		return (NULL);

	_memset(n, 0, sizeof(int) * nmemb);

	return (n);
}
