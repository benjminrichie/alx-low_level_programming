#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Another function that will free a list
 * @head: Just a pointer to the very first node
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmpBen;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tmpBen = (*head)->next;
		free(*head);
		*head = tmpBen;
	}
	head = NULL;
}
