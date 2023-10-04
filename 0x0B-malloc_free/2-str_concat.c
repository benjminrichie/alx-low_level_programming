#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This will concatenate the two strings
 * @s1: this is the input1
 * @s2: this is the input2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	size_t x, y, z, m;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	x = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}

	ptr = malloc(sizeof(char) * (x + y + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (z = 0; z < x; z++)
	{
		ptr[z] = s1[z];
	}
	for (m = 0; m <= y; m++)
	{
		ptr[z] = s2[m];
		z++;
	}
	return (ptr);
}
