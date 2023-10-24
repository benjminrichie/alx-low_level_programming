#include "lists.h"

/**
 * pop_listint - This prog. will simply just delete the head node of
 * a listint_t linked list, then will return the head node’s data (n)
 * @head: Just a pointer to the very first node
 * Return: 0 if list is empty else, content of deleted elements
 */

int pop_listint(listint_t **head)
{
	listint_t *ben_temp;
	int theNumber;

	if (!head || !*head)
	{
		return (0);
	}
	theNumber = (*head)->n;
	ben_temp = (*head)->next;
	free(*head);
	*head = ben_temp;
	return (theNumber);
}
