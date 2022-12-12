#include "main.h"

/**
 * _memset - A program that fills a memory *s with constant
 * bytes b.
 *
 * @s: memory to fill
 * @b: bytes to fill into memory
 * @n: number of bytes to fill into memory
 *
 * Return: pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
