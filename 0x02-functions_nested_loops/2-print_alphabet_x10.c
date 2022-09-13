#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times.
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		char n;

		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);

		_putchar('\n');
	}
}
