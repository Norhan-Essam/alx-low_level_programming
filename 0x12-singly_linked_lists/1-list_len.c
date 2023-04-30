#include "lists.h"

/**
 * list_len - determines length of linked list
 * @d: pointer to first node
 *
 * Return: size of list
*/
size_t list_len(const list_t *d)
{
	size_t e = 0;

	while (d)
	{
		d = d->next;
		e++;
	}
	return (e);
}
