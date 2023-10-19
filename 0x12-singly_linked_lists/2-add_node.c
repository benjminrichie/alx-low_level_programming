#include "lists/h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - This will simply
 * Add nodes at the start of the list
 * @str: This is the string to be addes to node
 * @head:This is the original
 * Return: If successfull,
 * Return address of new list else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int d_length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[d_length])
		d_length++;

	temp->len = d_length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
