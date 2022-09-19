#include "main.h"

/**
 * print_rev - Print string in reverse.
 *
 * @s: string to be printed in reverse.
 *
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
