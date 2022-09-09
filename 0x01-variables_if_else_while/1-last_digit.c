#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of C program.
 * This program detects the last digit in n
 * and prints some message regarding the last digit.
 *
 * Return: 0 as Success.
 */

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	else if (d == 0)
		printf("Last digit of %d is %d and is 0\n", n, d);
	else if (d < 6 && d != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);

	return (0);
}
