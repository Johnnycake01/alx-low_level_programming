#include "main.h"

/**
 * 1-swap - This function swaps the value of two
 * interger
 *
 * @n: The pointer to be updated.
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem; 
}