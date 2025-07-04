#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Entry point of the program
 *
 * @s: searches a string for any of a set of bytes
 * @accept: searches a string for any of a set of bytes
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
/*looping each character in s string */
for (i = 0; accept[j] != '\0'; i++)
{
/* checking is s[i] matches characters in accept */
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (NULL);
}
