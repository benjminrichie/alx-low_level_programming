#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - This will print all elements
 * @h: This will be the list_t(head) list
 * Return: Simply returns the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	int r;

	if (h == NULL)
		return (0);

	for (r = 0; h != NULL; r++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (r);
}
