#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Entry point of the program
 *
 * @s1: function that compares two strings
 * @s2: function that compares two strings
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
/*move character in s1*/
s1++;
s2++;
}
/*computes 0 if equal*/
return (*s1 - *s2);
}
