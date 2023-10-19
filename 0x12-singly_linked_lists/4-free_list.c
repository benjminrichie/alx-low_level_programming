#include "lists.h"
#include <stdlib.h>

/**
 * free_list - This function will simply frre a list
 * @head: This is the head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *myCurrent_node;

	while ((myCurrent_node = head) != NULL)
	{
		head = head->next;
		free(myCurrent_node->str);
		free(myCurrent_node):
	}
}
