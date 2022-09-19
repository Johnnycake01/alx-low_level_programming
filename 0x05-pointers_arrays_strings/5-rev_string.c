#include "main.h"

/**
 * rev_string - Reverse the given string.
 *
 * @s: string to be reversed.
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	j = 0;

	for (i = i - 1; j < i; i--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}
