#include "main.h"

/**
 * more_numbers - Prints the numbers between 0-14 ten times.
 */
void more_numbers(void)
{
	int input, count;

	for (count = 0; count <= 9; count++)
	{
		for (input = 0; input <= 14; input++)
		{
			if (input > 9)
				_putchar((input / 10) + '0');
			_putchar((input % 10) + '0');
		}
		_putchar('\n');
	}
}