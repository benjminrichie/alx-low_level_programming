#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This function will count the number of unique nodes
 * @head: Just a pointer to the head
 * Return: 0 if the list is not looped else the unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *Ben, *Rich;
	size_t myNodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
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
				myNodes++;
			}
			Ben = Ben->next;
			while (Ben != Rich)
			{
				Ben = Ben->next;
				myNodes++;
			}
			return (myNodes);
		}
		Ben = Ben->next;
		Rich = (Rich->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prog that prints a linked list
 * @head: Just a pointer
 * Return: Number_of_Nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t myNodes, index = 0;

	myNodes = looped_listint_len(head);

	if (myNodes == 0)
	{
		for (; head != NULL; myNodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < myNodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (myNodes);
}

