#include <stdio.h>
#include "main.h"

/**
 * _putchar - Function that writes the character c to stdout
 * @c:The character to be printed
 *
 * Return: On success 1.else return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
