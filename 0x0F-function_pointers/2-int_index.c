#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - This function is expected to simply search for an integer
 * @size: This is the size
 * @array: This is the array
 * @cmp: Pointer
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
		{
			return (k);
		}
	}
	return (-1);
}
