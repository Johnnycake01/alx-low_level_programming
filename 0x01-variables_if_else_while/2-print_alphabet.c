#include <stdio.h>

/**
 * main - Entry point of C program.
 * This program prints all alphabets in
 * lower case followed by a new line.
 *
 * Return: 0 as Success.
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
