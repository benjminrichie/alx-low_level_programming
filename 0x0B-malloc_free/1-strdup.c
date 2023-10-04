#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This should return a pointer to recently allocated space
 * in memory and duplicate the strings it holds to a new space
 *
 * @str: This is the input string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	size_t a, b;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	strdout = (char *)malloc(sizeof(char) * (a + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		strdout[b] = str[b];
	}
	return (strdout);

}
