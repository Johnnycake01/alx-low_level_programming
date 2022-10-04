#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: pointer to concatened strings or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int lenght_s1, lenght_s2, i;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (lenght_s1 = 0; s1[lenght_s1]; lenght_s1++)
		;
	for (lenght_s2 = 0; s2[lenght_s2]; lenght_s2++)
		;

	int totalLenght = lenght_s1 + lenght_s2 + 1;

	new_str = malloc(sizeof(char) * totalLenght);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < totalLenght; i++)
	{
		if (i < lenght_s1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - lenght_s1];
	}

	return (new_str);
}
