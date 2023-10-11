#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints the opcodes of its own main function
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, k;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (k = 0; k < bytes; k++)
	{
		if (k == bytes - 1)
		{
			printf("%02hhx\n", arr[k]);
			break;
		}
		printf("%02hhx ", arr[k]);
	}
	return (0);
}
