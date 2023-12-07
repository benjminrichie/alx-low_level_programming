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
	dlistint_t *tmp;
	unsigned int dSize = 0;

	if (head == NULL)
	{
	return (NULL);
	}

	tmp = head;
	while (tmp)
	{
		if (index == size)
		{
			return (tmp);
		}
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
