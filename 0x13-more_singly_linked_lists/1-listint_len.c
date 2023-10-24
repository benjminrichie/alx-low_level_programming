#include "lists.h"
#include <stdio.h>

/**
 * listint_len -This is a prog that will
 * return the number of elements in a linked listint_t list.
 * @h: This a just a pointer to the very first node
 * Return: elements__
 */

size_t listint_len(const listint_t *h)
{
	size_t myProjectNodes;

	for (myProjectNodes = 0; h != NULL; myProjectNodes++)
	{
		h = h->next;
	}
	return (myProjectNodes);
}
