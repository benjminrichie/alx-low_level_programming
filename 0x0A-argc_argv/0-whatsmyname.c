#include "main.h"
#include <stdio.h>

/**
 * main - To print the name of the program
 * @argc: This is the number of arguments
 * @argv: This will be the  array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
