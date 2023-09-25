#include "main.h"

/**
 * _strpbrk - Entry
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
				return (s);
		}
		s++;
	}
	return ('\n');

}
