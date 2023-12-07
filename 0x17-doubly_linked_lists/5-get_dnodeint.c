#include "lists.h"

/**
 * get_dnodeint_at_index - This func will return
 * nth node of a dlistint_t linked list.
 *
 * @head: This is a pointer tothe first node of the list
 *
 * @index: This is the index of the node starting from 0
 *
 * Return: The nth node or null
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int item = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	while (head != NULL)
	{
		if (item == index)
		{
			break;
		}
		head = head->next;
		item++;
	}

	return (head);
}
