#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function will allocate memory
 * using malloc the function
 * @b: This is the interger to be inputed
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *The_pointer;

	The_pointer = malloc(b);
	if (The_pointer == NULL)
	{
		exit(98);
	}
	return (The_pointer);
}
