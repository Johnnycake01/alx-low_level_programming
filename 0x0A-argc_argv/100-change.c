#include <stdio.h>
#include <stdlib.h>

void check25(int *amount, int *coins);

/**
 * main - A proogram that prints the minimum number of coins to make for amount
 * @argc: The arguements' counter
 * @argv: The argument's values
 * Return: 0 as Success or 1 for Error.
 */

int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc == 2)
	{
		amount = atoi(argv[1]);

		if (amount < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		check25(&amount, &coins);
		if (amount % 10 >= 0)
		{
			coins += amount / 10;
			amount %= 10;
		}
		if (amount % 5 >= 0)
		{
			coins += amount / 5;
			amount %= 5;
		}
		if (amount % 2 >= 0)
		{
			coins += amount / 2;
			amount %= 2;
		}
		if (amount % 1 >= 0)
			coins += amount;
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * check25 - Check if amount is divisible by 25
 * @amount: Integer
 * @coins: Integer
 * Return: Nothing.
 */

void check25(int *amount, int *coins)
{
	if (*amount % 25 >= 0)
	{
		*coins += *amount / 25;
		*amount %= 25;
	}
}
