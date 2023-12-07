#include "lists.h"

/**
 * sum_dlistint - This func simply returns the sum
 * of all the data of a doubly linked list
 *
 * @head: This is the head of the list and pointer
 * to the very first node of the list
 *
 * Return: data sum
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int summation = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}

		while (head != NULL)
		{
			summation += head->n;
			head = head->next;
		}
	}

	return (summation);
}
