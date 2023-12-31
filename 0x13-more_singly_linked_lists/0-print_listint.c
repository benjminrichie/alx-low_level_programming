#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This program is written and meant to print
 * the elements of a listint_t
 *
 * @h: This is just a pointer to the very first node of the list
 *
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t myProjectNodes;

	for (myProjectNodes = 0; h != NULL; myProjectNodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (myProjectNodes);
}
