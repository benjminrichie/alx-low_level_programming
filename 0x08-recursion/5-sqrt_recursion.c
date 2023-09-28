#include "main.h"

/**
 *sqrt_a - return the returns the natural square root of a number
 *
 * @a: number
 * @b: iterator
 *
 * Return: square root or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > 4)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - function that returns square of natural numbers
 * @n: input
 * Return: natural square root
 */

int _sqrt_recurision(int n)
{
	return (sqrt_a(n, 0));
}
