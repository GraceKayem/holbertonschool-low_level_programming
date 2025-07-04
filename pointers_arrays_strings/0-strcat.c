#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point of the program
 *
 * @dest: concatenates two strings
 * @src: concatenates two strings
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
char *startaddress = dest;
/*moving pointer to the end of dest string*/
while (*dest != '\0')
{
dest++;
}
/*copying src to dest*/
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
/*adding null terminator to concatenated string*/
*dest = '\0';
return (startaddress);
}
