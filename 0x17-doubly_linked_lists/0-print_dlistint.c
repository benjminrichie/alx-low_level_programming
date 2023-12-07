#include "lists.h"

/**
 * print_dlistint - This func will print all
 * elements of a list
 *
 * @h: This is the head of the list
 *
 * Return: nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	int yam;

	yam = 0;

	if (h == NULL)
		return (yam);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		yam++;
		h = h->next;
	}
	return (yam);
}
