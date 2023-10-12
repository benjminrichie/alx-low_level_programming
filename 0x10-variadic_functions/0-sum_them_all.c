#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This should simply return the sum of all its parameters.
 * @n: This represents the number of parameters
 * @...: This is a variable number
 * Return: if n == 0 - 0
 * Otherwise - sum of all param
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int q, sum = 0;

	va_start(ap, n);

	for (q = 0; q < n; q++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
