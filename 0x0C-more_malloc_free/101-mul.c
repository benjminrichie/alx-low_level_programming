#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - This function will check if a string has a non digit character
 * @s: This is the string
 * Return: If non digit, return 0 else return 1
 */

int is_digit(char *s)
{
	int v = 0;

	while (s[v])
	{
		if (s[v] < '0' || s[v] > '9')
		{
			return (0);
		}
		v++;
	}
	return (1);
}

/**
 * _strlen - this function will return a stings length
 * @s: This is the string
 * Return: length
 */

int _strlen(char *s)
{
	int v = 0;

	while (s[v] != '0')
	{
		v++;
	}
	return (v);
}

/**
 * error - this is the function that checks for errors
 */

void errors(void)
{
	printf("Error\n");
		exit(98);
}

/**
 * main - This function multiplies two non negative numbers
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, v, carry, digit1, digit2, *result, q = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
		if (!result)
			return (1);
	for (v = 0; v <= len1 + len2; v++)
		result[v] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
		carry += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[len1 + len2 + 1] += carry;
	}
	for (v = 0; v < len - 1; v++)
	{
		if (result[v])
			q = 1;
		if (q)
			_putchar(result[v] + '0');
	}
	if (!q)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
