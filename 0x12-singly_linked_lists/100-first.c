#include <stdio.h>

void MyFunc(void)__attribute__ ((constructor));

/**
 * MyFunc - This simply prints a string of characters
 * to the main output
 * Return: Nothing
 */

void MyFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
