#include "main.h"

/**
 * _strspn - A program that gets the length of a substring.
 *
 * @s: Input string
 * @accept: Input character
 *
 * Return: length of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count, shouldContinue;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		shouldContinue = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				shouldContinue = 1;
			}
		}

		if (!shouldContinue)
			return (count);
	}

	return (count);
}
