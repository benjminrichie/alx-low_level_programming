#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This function will concatenate all the argument
 * @ac: This is the argument count
 * @av: This is the argument vector
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int w, n, x = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < ac; w++)
	{
		for (n = 0; av[w][n]; n++)
			len++;
	}
	len += ac;

	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return (NULL);
	for (w = 0; w < ac; w++)
	{
		for (n = 0; av[w][n]; n++)
		{
			aout[x] = av[w][n];
			x++;
		}
		if (aout[x] == '\0')
		{
			aout[x++] = '\n';
		}
	}
	return (aout);
}
