#include "main.h"
/**
 * _strlen - Returns length of string
 * @s: the string
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
