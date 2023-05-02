#include "lists.h"

/**
 * listint_len - prints a linked list
 * @d: pointer to first node
 *
 * Return: size of list
*/
size_t listint_len(const listint_t *d)
{
	size_t e = 0;

	while (d)
	{
		d = d->next;
		e++;
	}
	return (e);
}
