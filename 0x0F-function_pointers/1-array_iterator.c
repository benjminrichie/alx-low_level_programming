#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - This function is meant to execute a function
 * given as a parameter on each element of an array.
 * @array: This is is the array
 * @size: This is the size of elements to be printed
 * @action: pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int q;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}
