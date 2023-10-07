#include "main.h"
#include <stdlib.h>

/**
 * char *string_nconcat - This function will concatenate two strings
 * and point to a newly allocated space in memory
 * @s1: This is the first string
 * @s2: This is the second string
 * @n: This is the number of elements
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *s;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		s[c] = s1[c];
	for (c = 0; c < b && c < n; c++)
		s[a + c] = s2[c];
	s[a + b] = '\0';
	return (s);
}
