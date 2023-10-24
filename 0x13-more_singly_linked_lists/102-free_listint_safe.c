#include "lists.h"

/**
 * free_listint_safe - This is a function that frees a linked list
 * @h: Just a pointer to the very first node
 * Return: The total number of elements freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int divv;
	listint_t *temp;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		divv = *h - (*h)->next;
		if (divv > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
