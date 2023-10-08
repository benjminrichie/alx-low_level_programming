#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function will create an array of integers.
 * @min: This is the minimum value
 * @max: This is the maximum value
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int q, r;
	int *w;

	if (min > max)
	{
		return (NULL);
	}
	r = max - min + 1;
	w = malloc(sizeof(int) * r);
	if (w == NULL)
	{
		return (NULL);
	}
	for (q = 0; q < r; q++)
	{
		w[q] = min;
		min++;
	}
	return (w);
}
