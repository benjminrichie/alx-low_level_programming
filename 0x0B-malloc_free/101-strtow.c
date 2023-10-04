#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - This is the main entry
 * @grid: This is the input
 * @height: This is another input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - This is the function that will split a string into words
 * @str: This is the string with words to spilt
 * Return: pointer
 */
char **strtow(char *str)
{
	char **aout;
	size_t c, height, a, b, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		aout = malloc((height + 1) * sizeof(char *));
	}
		if (aout == NULL || height == 0)
		{
			free(aout);
			return (NULL);
		}
	for (a = a1 = 0; a < height; a++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[a] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[a] == NULL)
				{
					ch_free_grid(aout, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; a1 <= c; a1++, b++)
			aout[a][b] = str[a1];
		aout[a][b] = '\0';
	}
	aout[a] = NULL;
	return (aout);
}
