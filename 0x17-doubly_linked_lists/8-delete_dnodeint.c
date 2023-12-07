#include "lists.h"

/**
 * delete_dnodeint_at_index - This func only
 * deletes the node at index of a linked list
 *
 * @head: head and pointer to the first node
 *
 * @index: This is the index
 *
 * Return: 1(SUCCESS) else -1(FAILED)
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int item = 0;
	dlistint_t *h1;
	dlistint_t *h2;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	while (h1 != NULL)
	{
		if (item == index)
		{
			if (item == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		item++;
	}

	return (-1);
}
