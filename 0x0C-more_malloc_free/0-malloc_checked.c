#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @l: int
 * Return: pointer to the array initialized or NULL
*/

void *malloc_checked(unsigned int l)
{
	int *v = malloc(l);

	if (v == 0)
		exit(98);

	return (v);
}
