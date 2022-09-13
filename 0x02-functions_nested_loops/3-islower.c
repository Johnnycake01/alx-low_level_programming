#include "main.h"

/**
 * _islower - check if input value is
 * lowercase or uppercase.
 *
 * @c: parameter under test.
 *
 * Return: 1 if input is lower else 0.
 */

int _islower(int input)
{
	if (input >= 97 && input <= 122)
		return (1);
	else
		return (0);
}
