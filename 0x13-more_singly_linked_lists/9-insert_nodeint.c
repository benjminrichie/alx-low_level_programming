#include "lists.h"

/**
 * insert_nodeint_at_index - This function simply
 * inserts a new node at a given position.
 * @n: This is the data to insert in the new node
 * @head: Just a pointer to very the first node
 * @idx: This is the index where new node is added
 * @n: data to insert in the new node
 * Return: NULL or pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int y;
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		{
			return (newNode);
		}
	}
	for (y = 0; temp && y < idx; y++)
	{
		if (y == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			{
				return (newNode);
			}
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
