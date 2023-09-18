#include "main.h"

/**
 * puts2 - function that prints only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int z = 0;
	int t = 0;
	char *s = str;
	int k;

	while (*s != '\0')
	{
		s++;
		z++;
	}
	t = z - 1;
	for (k = 0; k <= t; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	putchar('\n');
}
