#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void print_input(char c, char **temp, va_list ap);

/**
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *temp;
	int i = 0;

	va_start(ap, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[i])
	{
		print_input(format[i], &temp, ap);

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
				format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_input - determine the type of input and print it.
 * @c: the input to print
 * @temp: pointer to a string
 * @ap: variable list
 * Return: Nothing
 */
void print_input(char c, char **temp, va_list ap)
{
	switch (c)
	{
		case 'c':
			printf("%c", (char) va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(ap, double));
			break;
		case 's':
			*temp = va_arg(ap, char*);
			if (temp != NULL)
			{
				printf("%s", (*temp));
				break;
				return;
			}
			printf("(nil)");
			break;
	}
}
