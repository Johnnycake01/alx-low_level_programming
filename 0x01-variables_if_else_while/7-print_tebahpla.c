#include <stdio.h>

/**
 * main - Entry point of C program.
 * This program prints all lowercase alphabets
 * in reversed order.
 *
 * Return: 0 as Success.
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
