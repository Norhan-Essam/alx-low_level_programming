#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @d: pointer to first node
 *
 * Return: size of list
*/
size_t print_listint(const listint_t *d)
{
	size_t e = 0;

	while (d)
	{
		printf("%d\n", d->m);
		d = d->next;
		e++;
	}
	return (e);
}
