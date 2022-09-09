#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for C program.
 * This program prints whether n is +ve,
 * zero or -ve
 *
 * Return: 0 as Success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
