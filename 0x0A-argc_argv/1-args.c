#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: 0 as Success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
