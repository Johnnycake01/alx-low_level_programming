#include "main.h"

/**
 * _memcpy - A program the copies n bytes from src to dest
 *
 * @dest: destination memory
 * @src: source memory
 * @n: n of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
