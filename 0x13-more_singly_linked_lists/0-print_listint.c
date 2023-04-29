#include "list.h"

/**
 * -strlen - returns the length of a string
 *  @d: the string whose length to check
 *
 *  Return: integer length of string
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
 * @g: pointer to first node
 *
 * Return: size of list
*/
size_t print_list(const list_t *g)
{
	size_t e = 0;

	while (g)
	{
		printf("[%d] %s\n", _strlen(g->str), g->str ? g->str : "(nil)");
		g = g->next;
		e++;
	}
	return (e);
}
