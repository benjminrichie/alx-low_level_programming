#ifndef LINKED
#define LINKED

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct lists_s - This will be the singlylinked list
 * @str: This will be the string
 * @next: This is a pointer to the next node
 * @len: This will be the length
 * Description: node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
