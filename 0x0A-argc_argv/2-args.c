#include "main.h"
#include <stdio.h>

/**
 * main - This will print all arguments it receives
 * @argc: This will be the number of arguments
 * @argv: This will be the array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}
	return (0);
}
