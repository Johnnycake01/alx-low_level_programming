#include "main.h"

/**
 * _puts - Prints the given string to std output.
 *
 * @str: string to be printed.
 *
 * Return: Nothing.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
