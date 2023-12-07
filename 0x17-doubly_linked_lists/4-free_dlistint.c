#include "lists.h"

/**
 * free_dlistint - this func only frees a dlistint_t list.
 *
 * @head: pointer to the first node of the list
 *
 * Return: Nothing
 *
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
	return;
	}

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
