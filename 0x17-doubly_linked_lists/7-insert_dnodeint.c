#include "lists.h"

/**
 * insert_dnodeint_at_index - This is the func that
 * inserts a new node at a given index
 *
 * @h: pointer to the first node
 *
 * @idx: This is the index of the new node
 *
 * @n: value
 *
 * Return: address (SUCCESS), else NULL (FAILED)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int item;
	dlistint_t *new;
	dlistint_t *head;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		item = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;

		while (head != NULL)
		{
			if (item == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			item++;
		}
	}
	return (new);
}
