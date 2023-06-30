#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @d: the string whose length to check
 *
 * Return: integer length of string
*/
int _strlen(char *d)
{
	int e = 0;

	if (!d)
		return (0);
	while (*d++)
		e++;
	return (e);
}

/**
 * print_list - prints a linked lists
 * @d: pointer to first node
 *
 * Return: size of list
*/
size_t print_list(const list_t *d)
{
	size_t e = 0;

	while (d)
	{
		printf("[%d] %s\n", _strlen(d->str), d->str ? d->str : "(nil)");
		d = d->next;
		e++;
	}
	return (e);
}
