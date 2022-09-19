#include "main.h"

/**
 * swap_int - This function swaps the value of two
 * interger
 *
 * @a: the first value to be swapped.
 * @b: the second value to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem; 
}