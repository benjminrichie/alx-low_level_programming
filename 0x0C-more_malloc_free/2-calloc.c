#include "main.h"
#include <stdlib.h>

/**
 * _calloc - This function will allocate memory for an array, using malloc
 * @nmemb: This is the number of block of memory
 * @size: This is the size of elements
 *
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *w;
	size_t q;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	w = malloc(nmemb * size);
	if (w == NULL)
	{
		return (NULL);
	}
	for (q = 0; q < (nmemb * size); q++)
	{
		w[q] = 0;
	}
	return (w);
}
