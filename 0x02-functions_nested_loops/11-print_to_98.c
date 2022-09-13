#include "main.h"
#include <stdio.h>

#define STOP 98

/**
 * print_to_98 - Print from n to 98.
 *
 * @n: function parameters. n is the starting
 * point of the printing.
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < STOP)
	{
		for (i = n; i <= STOP; i++)
		{
			if (i != STOP)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else if (n > STOP)
	{
		for (i = n; i >= STOP; i--)
		{
			if (i != STOP)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else
		printf("%d", n);

	printf("\n");
}
