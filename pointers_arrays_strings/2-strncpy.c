#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Entry point of the program
 *
 * @dest: copies a string
 * @src: copies a string
 * @n: copies a string
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
char *startaddress = dest;
int copy = 0;
/*copying src to dest*/
while (*src != '\0' && copy < n)
{
*dest = *src;
src++;
dest++;
copy++;
}
while (copy < n)
{
*dest = '\0';
dest++;
copy++;
}
return (startaddress);
}
