#include "main.h"
#include <stdio.h>

/**
 * _strncat - Entry point of the program
 *
 * @dest: concatenates two strings
 * @src: concatenates two strings
 * @n: concatenates two strings
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int length = 0;
int concate = 0;
/*the end of dest string*/
while (dest[length] != '\0')
{
length++;
}
/*n bytes*/
while (concate < n && src[concate] != '\0')
{
dest[length] = src[concate];
length++;
concate++;
}
/*adding null terminator*/
dest[length] = '\0';
return (dest);
}
