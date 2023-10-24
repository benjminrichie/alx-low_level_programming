#include "lists.h"

/**
 * reverse_listint - This function simply reverses a listint_t linked list
 * @head: Just a pointer to the first node
 * Return: A pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *backward = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = next;
	}
	*head = backward;

	return (*head);
}
