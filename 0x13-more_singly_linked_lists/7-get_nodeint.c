#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: pointer to first node
 * @index: index of node to get
 *
 * Return: pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int m;

	for (node = head, m = 0; node && m < index; node = node->next, m++)
		;
	return (node);
}
