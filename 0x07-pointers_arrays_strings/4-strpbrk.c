#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - A program that searches a string s for any character in accept.
 *
 * @s: string to search for
 * @accept: characters to locate in string
 *
 * Return: A pointer to the matched character return s or NULL if no match found.
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
