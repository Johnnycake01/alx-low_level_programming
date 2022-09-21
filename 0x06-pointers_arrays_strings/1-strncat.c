#include "main.h"

/**
 * _strncat - Concatenates two strings using n bytes
 * from src.
 *
 * @dest: String to be concatenated to.
 * @src: String to read n bytes from.
 * @n: The number of bytes ti be read from src.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
		dest[i] = src[j];

	return (dest);
}
