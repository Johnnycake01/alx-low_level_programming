#include <stdio.h>

/**
 * main - Entry point of C program.
 * This program prints all single digits decimal numbers.
 *
 * Return: 0 as Success.
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
