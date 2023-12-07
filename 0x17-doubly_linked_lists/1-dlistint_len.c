#include "lists.h"

/**
 * dlistint_len - This func will return
 * number of elements in a doubly linked list
 *
 * @h: head
 *
 * Return: nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	int yam = 0;

	if (h == NULL)
		return (yam);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		yam++;
		h = h->next;
	}

	return (yam);
}
