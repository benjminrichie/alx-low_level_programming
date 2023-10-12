#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - This should print numbers, followed by a new line.
 * @separator: This is the string between num
 * @n: This represents the number of int
 * @...: Variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int j;

	va_start(nums, n);

	for (j = 0; j < n; j++)
	{
		{
			printf("%d", va_arg(nums, int));
		}
		if (j != (n - 1) && seperator != NULL)
		{
			printf("%s", sepertor);
		}
	}
	printf("\n");
	va_end(nums);
}
