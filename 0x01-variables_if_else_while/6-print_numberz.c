#include <stdio.h>

/**
 * main - Entry point of C program.
 * This program prints all single digit
 * decimal numbers using putchar();
 *
 * Return: 0 as Success.
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');

	return (0);
}
