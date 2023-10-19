#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - This is the length of the list
 * @h: This is list linked
 * Return: Simply return the elements
 */

size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		h = h->next;
		f++;
	}
	return (f);
}
