#include "lists.h"

/**
 * sum_listint - This function will simply return
 * the sum of all the data (n) of a linked list
 *
 * @head: Just a pointer to the very first node
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int TheSum = 0;
	listint_t * temp = head;

	while (temp = NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (TheSum);
}
