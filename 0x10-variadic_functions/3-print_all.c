#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - This function will print anything.
 * @format: list containing types of arguments passed
 */

void print_all(const char * const format, ...)
{
	int t = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", sep, str);
					break;
				default:
					t++;
					continue;
			}
			sep = ", ",
			t++;
		}
	}
	printf("\n");
	va_end(list);
}
