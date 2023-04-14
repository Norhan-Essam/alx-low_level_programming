#include "main.h"

/**
 * *_realloc - allocates a memory block using malloc and free.
 * @ptr: pointer to memory allocated with malloc(old_size).
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: size in bytes of the new memory block.
 *
 * Return:NULL if new_size = 0 and ptr is not NULL.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *r;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		r = malloc(new_size);
		if (r == NULL)
			return (NULL);
		return (r);
	}
	if (new_size > old_size)
	{
		r = malloc(new_size);
		if (r == NULL)
			return (NULL);
		for (a = 0; a < old_size && a < new_size; a++)
			*((char *)r + 1) = *((char *)ptr + a);
		free(ptr);
	}
	return (r);
}
