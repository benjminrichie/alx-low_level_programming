#include "main.h"

/**
 * get_bit - This function should return value of a bit at a given index
 *
 * @index: My index
 *
 * @n: The num
 *
 * Return: bit value else -1(ERROR)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int benCheckMe, benDivMe;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	benDivMe = 1 << index;
	benCheckMe = n & benDivMe;

	if (benCheckMe == benDivMe)
	{
		return (1);
	}
	return (0);
}
