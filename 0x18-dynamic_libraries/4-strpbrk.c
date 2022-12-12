#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - A program that searches a string s for any character in accept.
 *
 * @s: string to search
 * @accept: characters to locate.
 *
 * Return: A pointer to the matched character in s or NULL if no match found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
