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
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
