#include <stdio.h>
#include "main.h"

/**
 * _strstr - A program that locates a substring in a string.
 *
 * @haystack: string to be searched.
 * @needle: substring to find.
 *
 * Return: pointer to the beginning of needle or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}

		if (*second == '\0')
			return (haystack);
	}

	return (NULL);
}
