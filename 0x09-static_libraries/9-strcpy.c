#include "main.h"

/**
 * *_strcpy - Copy string from src to dest.
 *
 * @dest: The buffer to be copied to and returned.
 * @src: The source to be copied from.
 *
 * Return: A pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0;; i++)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			break;
	}

	return (dest);
}
