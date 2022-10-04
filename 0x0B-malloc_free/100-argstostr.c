#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to the concatenated string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	unsigned int i, j, new_str_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
	}

	new_str = (char *) malloc((i * j) * sizeof(char) + ac + ac - 3);

	if (new_str == NULL)
		return (NULL);

	new_str_len = 0;

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++, new_str_len++)
			new_str[new_str_len] = av[i][j];
		new_str[new_str_len] = '\n';
		new_str_len++;
	}
	new_str[new_str_len] = '\0';

	return (new_str);
}
