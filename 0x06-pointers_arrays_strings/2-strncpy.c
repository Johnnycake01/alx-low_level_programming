#include "main.h"

/**
 * _strncpy - Copy string src to string dest.
 *
 * @dest: Buffer
 * @src: Source
 * @n: Number of char to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
