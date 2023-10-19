#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - This will print all elements
 * @h: This will be the list_t list
 * Return: Simply returns the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t ben_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		ben_nodes++;
		h = h->next;
	}
	return (ben_nodes);
}
