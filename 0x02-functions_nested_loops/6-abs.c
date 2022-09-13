#include "main.h"

/**
 * _abs - Compute the absolute value of n.
 *
 * @n: function parameter.
 *
 * Return: The absolute value of n.
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
