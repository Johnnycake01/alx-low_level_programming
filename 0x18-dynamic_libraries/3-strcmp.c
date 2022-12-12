#include "main.h"

/**
 * _strcmp - Copmares two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int indicating the status.
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
	}

	return (0);
}
