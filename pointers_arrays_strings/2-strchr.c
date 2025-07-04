#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point of the program
 *
 * @c: function that locates a character in a string
 * @s: function that locates a character in a string
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
s++;
}
else
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
