#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @m: value for new node
 *
 * Return: pointer to new node
*/
listint_t *add_nodeint(listint_t **head, const int m)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (!head || !new_head)
		return (NULL);

	new_node->next = NULL;
	new_node->m = m;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
