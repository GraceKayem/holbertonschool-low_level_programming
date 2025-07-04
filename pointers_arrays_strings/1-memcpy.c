#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Entry point of the program
 *
 * @n: function that copies memory area
 * @dest: function that copies memory area
 * @src: function that copies memory area
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
/* copying byte from src to dest */
dest[i] = src[i];
}
/* returns pointer to dest */
return (dest);
}
