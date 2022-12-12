#include "main.h"

/**
 * _strcat - Concatenate two strings.
 *
 * @dest: the final string.
 * @src: the other string.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
