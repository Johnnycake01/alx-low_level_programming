#include "main.h"

/**
 * puts_half - Prints the 2nd half of a string.
 *
 * @str: string whose 2nd half is to be printed.
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
