#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes it with c.
 * @size: The size of the array
 * @c: char used to initialize the array.
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(char) * size);

	if (s == NULL || size == 0)
		return (NULL);

	for (; i < size; i++)
		s[i] = c;

	return (s);
}
