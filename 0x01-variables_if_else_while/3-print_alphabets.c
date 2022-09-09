#include <stdio.h>

/**
 * main - Entry point of C program.
 * This program prints all alphabets in lower case
 * and upper case followed by a new line.
 *
 * Return: 0 as Success.
 */

int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
