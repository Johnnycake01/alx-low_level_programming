#include "main.h"

/**
 * clear_bit - clear a bit gived in a index position
 * @n: pointer to a binary number
 * @index: position to clear
 * Return: 1 if succefull and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
