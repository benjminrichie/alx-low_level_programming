#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function is expected to simply print a name
 * @name: This is the string
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
