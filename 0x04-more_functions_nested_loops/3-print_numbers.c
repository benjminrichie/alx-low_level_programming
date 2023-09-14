#include "main.h"

/**
 * print_numbers - Prints the num from 0 to 9
 * Return: Numbers from 0 to 9
 */

void print_numbers(void)
{
	x;
	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
