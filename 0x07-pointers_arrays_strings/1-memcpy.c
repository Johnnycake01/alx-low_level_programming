#include "main.h"

/**
 * _memcpy - copies n bytes from memory 
 * area src to memory area dest
 * 
 * @dest: memory to fill
 * @src: value to fill into memory
 * @n: number of value to be filled into memory
 * 
 * Return: dest
 * */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int m;
    for (m = 0; m < n; m++)
        dest[m] = src[m];
    
    return(dest);
}