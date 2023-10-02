#include "main.h"
#include <stdio.h>

/**
 * main - To print number of arguments
 * @argc: use this as number of arguments
 * @argv: use this as array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*You can ignore the argv*/
	printf("%d\n", argc - 1);

	return (0);
}
