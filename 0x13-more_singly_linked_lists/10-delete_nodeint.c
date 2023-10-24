#include "lists.h"

/**
 * delete_nodeint_at_index - This program simply deletes
 * a node in a linked list
 * @head: Just a pointer to the very first node
 * @index: This represents the index of the nodes to be deleted
 * Return: 1 if (Success, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *temp = *head;
	listint_t *present = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (y < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		y++;
	}
	present = temp->next;
	temp->next = present->next;
	free(present);

	return (1);
}
