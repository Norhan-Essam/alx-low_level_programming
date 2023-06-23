#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @m: char to initialize
 * Return: pointer to the array initialized or NULL
*/

char *create_array(unsigned int size, char m)
{
	char *c = malloc(size);

	if (size == 0 || c == 0)
		return (0);

	while (size--)
		c[size] = m;

	return (c);
}
