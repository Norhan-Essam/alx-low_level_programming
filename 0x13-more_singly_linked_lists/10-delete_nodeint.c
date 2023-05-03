#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: address of pointer to first node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int e = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (e == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		e++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}

