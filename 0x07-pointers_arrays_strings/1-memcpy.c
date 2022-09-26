#include "main.h"

/**
 * _memcpy - A program the copies n bytes from src to dest
 *
 * @dest: memory to fill
 * @src: memory to copy from
 * @n: no of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		dest[m] = src[m];

	return (dest);
}
