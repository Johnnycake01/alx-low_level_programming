#include "main.h"

/**
 * print_alphabet - Prints all alphabets
 * in lowercase followed by a new line.
 * Return: void.
 */

void print_alphabet(void)
{
	char z;

	for (z = 'a'; z <= 'z'; z++)
		_putchar(z);
	_putchar('\n');
}
