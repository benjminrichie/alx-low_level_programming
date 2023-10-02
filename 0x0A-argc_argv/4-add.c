#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_num - checks string
 * @str: this is the array string
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*string coounter*/
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - This is to print name of the prog.
 * @argc: to count the arguments
 * @argv: the argument itself
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
