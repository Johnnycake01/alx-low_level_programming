#include "main.h"

/**
 * times_table - Prints 9 times table.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int x = (i * j) / 10;
			int y = (i * j) % 10;

			if ((i * j) > 9)
				_putchar(x + '0');

			_putchar(y + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (i == 0 && j == 9)
				break;
			else if (i * (j + 1) < 10)
				_putchar(' ');
		}

		_putchar('\n');
	}
}
