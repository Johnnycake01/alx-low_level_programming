#include "main.h"

/**
 * puts2 - Prints every other character.
 *
 * @s: The string
 *
 * Return: Nothing
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}

	_putchar('\n');
}
