#include "main.h"

/**
 *leet - encode a string into 1337
 *
 * @s: string
 *
 * Return: encoded string s
 */

char *leet(char *s)
{
	int i, j;
	char leet[] = "oOlL22eEaA5566tT";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 16; j++)
			if (s[i] == leet[j])
				s[i] = j / 2 + '0';
	}

	return (s);
}
