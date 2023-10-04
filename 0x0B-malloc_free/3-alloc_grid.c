#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function will return a pointer
 * to a 2 dimensional array of integers as required
 * @width: This is the array's width
 * @height: This is the array's height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **grid_out;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid_out = malloc(height * sizeof(int *));
	if (grid_out == NULL)
	{
		free(grid_out);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid_out[a] = malloc(width * sizeof(int));
		if (grid_out[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(grid_out[a]);
			free(grid_out);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			grid_out[a][b] = 0;

	return (grid_out);
}
