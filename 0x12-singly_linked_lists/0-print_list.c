#include "lists.h"

/**
 * print_list - This will print all elements
 * @h: This will be the list_t(head) list
 * Return: Simply returns the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t benNode;

	if (h == NULL)
		return (0);

	for (benNode = 1; h->next != NULL; benNode++)
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
	return (benNode);
}
