#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int input;

	for (input = 0; input <= 9; input++)
	{
		if (input != 2 && input != 4)
			_putchar((input % 10) + '0');
	}

	_putchar('\n');
}