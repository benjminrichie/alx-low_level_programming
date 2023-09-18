#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @a: name of array
 * @n:number of elemets of array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d. ", a[i]);
	}
		if (i != (n - 1))
		{
			printf(", ");
		}
			printf("\n");
}
