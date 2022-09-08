#include <stdio.h>

/**
 * main - Entry point of C program
 * Return:0
 */

int main(void)
{
	char character;
	int num;
	long int number;
	long long int numbers;
	float dec;

	printf("Size of a char: %d byte(s)\n", sizeof(character));
	printf("Size of an int: %d byte(s)\n", sizeof(num));
	printf("Size of a long int: %d byte(s)\n", sizeof(number));
	printf("Size of a long long int: %d byte(s)\n", sizeof(numbers));
	printf("Size of a float: %d byte(s)\n", sizeof(dec));
	
	return (0);
}
