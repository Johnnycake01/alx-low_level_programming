#include "main.h"

/**
 * _isalpha - Check if a given parameter c is alphabet
 *
 * @c: parameter under test.
 *
 * Return: 1 if c is alphabet else 0.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
