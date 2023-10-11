#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_mul - this should return the product of two numbers.
 * @a: This is the first number.
 * @b: T his is the second number.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this should return the division of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_add - This should return the sum of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This should return the difference of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mod - This should return only the remainder when two numbers are divided
 * @a: This is the first number.
 * @b: This is the second number.
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
