#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates the given str and returns a pointer to the duplicate.
 * @str: pointer of the string to be duplicated.
 * Return: pointer to the duplicated string or NULL.
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 1; str[i] != '\0'; i++)
		;

	dup = malloc(sizeof(char) * (i));

	if (dup == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dup[j] = str[j];

	return (dup);

}
