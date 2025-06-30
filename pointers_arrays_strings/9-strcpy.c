#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Entry point of the program
 *
 * @dest: function that checks for uppercase character
 * @src:
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int copy = 0;
while (src[copy] != '\0')
{
dest[copy] = src[copy];
copy++;
}
dest[copy] = '\0';
return (dest);
}
