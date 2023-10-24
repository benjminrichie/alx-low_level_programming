#include "lists.h"

/**
 * get_nodeint_at_index - This function will simply return
 * the nth node of a linked list.
 * @index: This is the index
 * @head: simply a pointer to the very first node
 * Return: NULL or pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int me;
	listint_t *temp = head;

	for (me = 0; temp && me < index; me++)
	{
		temp = temp->next;
	}
	return (temp ? temp : NULL);
}
