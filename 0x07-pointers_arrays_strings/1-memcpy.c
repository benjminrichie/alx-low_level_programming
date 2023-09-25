#include "main.h"

/**
 * _memcpy - Function that copies memory data
 * @dest: storage memory
 * @src: memory to copy from
 * @n: number of bytes
 *
 * Return: Copied memory with changed n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
