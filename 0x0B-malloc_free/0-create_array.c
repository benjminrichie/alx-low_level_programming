#include "main.h"
#include <stdlib.h>

/**
 * create_array - this program creates array of chars and initializes
 * as specified with a char
 * @size: this is the size of the array
 * @c: this is the char to assign
 * Return: pointer to array if success else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int w;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (w = 0; w < size; w++)
		str[w] = c;
	return (str);
}
