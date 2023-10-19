#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - At the end of the list,
 * This will simply add a node
 * @str: This is the storage string
 * @head: This is the head of linked list
 * Return: Simply returns address of @head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *myNew_node, *myCurrent_node;
	size_t k;

	myNew_node = malloc(sizeof(list_t));
	if (myNew_node == NULL)
	{
		return (NULL);
	}
	myNew_node->str = strdup(str);

	for (k = 0; str[k]; k++)
		;

	myNew_node->len = k;
	myNew_node->next = NULL;
	myCurrent_node = *head;

	if (myCurrent_node == NULL)
	{
		*head = myNew_node;
	}
	else
	{
		while (myCurrent_node->next != NULL)
		{
			myCurrent_node = myCurrent_node->next;
		}
		myCurrent_node->next = myNew_node;
	}
	return (*head);
}
