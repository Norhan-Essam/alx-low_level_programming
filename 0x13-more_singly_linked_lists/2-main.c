#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
list_t *head;

head = NULL;
add_node_end(&head, 0);
add_node_end(&head, 1);
add_nodeint(&head, 2);
add_nodeint(&head, 3);
add_nodeint(&head, 4);
add_nodeint(&head, 98);
add_nodeint(&head, 402);
add_nodeint(&head, 1024);
print_list(head);
return (0);
}
