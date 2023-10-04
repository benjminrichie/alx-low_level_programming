#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function will free a 2 dimensional grid
 * previously created by the alloc_grid function.
 * @grid: This is the multi-dimensional int array
 * @height: This is the grid's height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
