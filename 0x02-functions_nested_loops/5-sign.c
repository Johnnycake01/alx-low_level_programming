#include "main.h"

/**
 * print_sign - Check if the parameter n is
 * positive , neutral or negative integer. Then print appropriate sign.
 *
 * @n: the parameter under test.
 *
 * Return: 1 if n is positive, 0 if n is neutral and -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
