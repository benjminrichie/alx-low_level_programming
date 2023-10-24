#include "lists.h"

/**
 * find_listint_loop - This program is meant to find the loop in a linked list
 * @head: Just a pointer to the first node
 * Return: NULL if there is no loop
 * else address of node at the beginning of the loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Ben, *Rich;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	Ben = head->next;
	Rich = (head->next)->next;

	while (Rich)
	{
		if (Ben == Rich)
		{
			Ben = head;

			while (Ben != Rich)
			{
				Ben = Ben->next;
				Rich = Rich->next;
			}
			return (Ben);
		}
		Ben = Ben->next;
		Rich = (Rich->next)->next;
	}
	return (NULL);
}
