#include "main.h"

#define LOWER 97
#define UPPER 122
#define STEP 32

/**
 * string_toupper - Convert lowercase char to uppercase
 *
 * @str: String
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= LOWER && str[i] <= UPPER)
			str[i] -= STEP;
			
		i++;
	}

	return (str);
}
