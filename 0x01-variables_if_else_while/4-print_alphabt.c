#include <stdio.h>

/**
 * main - Entry point of C program.
 * This program prints all alphabets except e and q.
 *
 * Return: 0 as Success.
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		else
			putchar(i);
	}
	putchar('\n');

	return (0);
}
