#include <stdio.h>

/**
 * main - Entry point of C program.
 * This program prints all the numbers of Base 16
 * in lowercase followed by a new line.
 *
 * Return: 0 as Success.
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
