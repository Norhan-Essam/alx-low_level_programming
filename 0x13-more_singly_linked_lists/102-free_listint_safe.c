#include "lists.h"
#include "stdlib.h"

/**
 * find_listint_loop_fl - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
*/
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 *
 * @q: head of list
 *
 * Return: number of nodes freed
*/
size_t free_listint_safe(listint_t **q)
{
	listint_t *next, *loopnode;
	size_t len;
	int loop = 1;

	if (q == NULL || *q == NULL)
		return (0);

	loopnode = find_listint_loop_fl(*q);
	for (len = 0; (*q != loopnode || loop) && *q != NULL; *q = next)
	{
		len++;
		next = (*q)->next;
		if (*q == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*q);
				break;
			}
			len++;
			next = next->next;
			free((*q)->next);
			loop = 0;
		}
		free(*q);
	}
	*q = NULL;
	return (len);
}
