#include <stdio.h>

/**
 * main - Entry point of C program.
 * This program prints all combo of single digit
 * numbers using putchar().
 *
 * Return: 0 as Success.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
