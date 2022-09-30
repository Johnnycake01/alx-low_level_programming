#include "main.h"

/**
 * _strlen - Returns the length of the given string.
 *
 * @s: The string whose length is to be returned.
 *
 * Return: The lenght of the string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
