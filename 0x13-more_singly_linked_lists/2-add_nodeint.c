#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - This prog simply
 * adds a new node at the start of a listint_t
 * @n: This is an int
 * @head: Just a pointer to the first node
 * Return: NULL if function fails else new address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
