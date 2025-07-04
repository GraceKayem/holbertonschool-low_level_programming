#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point of the program
 *
 * @s: function that gets the length of a prefix substring
 * @accept: function that gets the length of a prefix substring
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int count = 0;
int match;
for (i = 0; s[i] != '\0'; i++)
{
match = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (!match)
break;
count++;
}
return (count);
}
