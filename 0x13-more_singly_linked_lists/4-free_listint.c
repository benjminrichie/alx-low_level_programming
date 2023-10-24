#include "lists.h"
#include <stdio.h>

/**
 * free_listint - This is a function written to simply free a list
 * @head: Just a pointer to the very first node
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmpBen;

	while (head)
	{
		tmpBen = head->next;
		free(head);
		head = tmpBen;
	}
}
