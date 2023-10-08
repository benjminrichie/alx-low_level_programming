#include "main.h"
#include <stdlib.h>

/**
 * _realloc - This function will reallocate memory block using malloc and free
 * @old_size: This is the old size that was allocated in the heap using malloc
 * @new_size: This is the new size to be reallocated using _realloc function
 * @ptr: This is the former pointer that points to the previous memory
 * Return: Pointer to the new memory that has just been reallocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *u;
	size_t y, max = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		u = malloc(new_size);
			return (u);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	u = malloc(new_size);
		if (u == NULL)
		{
			return (NULL);
		}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (y = 0; y < max; y++)
	{
		u[y] = oldptr[y];
	}
	free(ptr);
	return (u);
}
