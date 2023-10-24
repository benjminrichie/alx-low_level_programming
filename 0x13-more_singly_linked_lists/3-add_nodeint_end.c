#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - This prog simply adds a new node at the
 * tail end of a listint_t list
 * @n: Just an int
 * @head: Just a pointer to the very first node
 * Return: NULL if not successfull else, address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (*head);
}
