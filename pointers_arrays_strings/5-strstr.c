#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point of the program
 *
 * @haystack: function that locates a substring
 * @needle: function that locates a substring
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
if (*needle == '\0')
{
return (haystack);
}
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
return (0);
}
