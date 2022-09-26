#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - A program that prints the sum of two diagonals of a square
 * matrix of integer.
 *
 * @a: square matrix of integer.
 * @size: size of a pointer
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, max = size * size, sum1 = 0, sum2 = 0;

	for (i = 0; i < max; i = i + size + 1)
		sum1 += a[i];

	for (i = size - 1; i < max - 1; i = i + size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
