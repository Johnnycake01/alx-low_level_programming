#include "main.h"

/**
 * get_bit - get the digit of a bit
 * @n: number
 * @index: position
 * Return: (-1) if fail or 1, 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
