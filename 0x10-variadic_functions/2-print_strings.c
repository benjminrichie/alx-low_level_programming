#include "variadic_functions.h"
#include <stdarg.>
#include <stdio.h>

/**
 * print_strings - This function prints strings, followed by a new line.
 * @separator: This is the string to be printed
 * @n: This represents number of str
 * @...: Variable function
 *
 * Description: If separator is NULL, dont print
 * if one string is NULL, print (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int w;

	va_start(strings, n);
	for (w = 0; w < n, w++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (w != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
