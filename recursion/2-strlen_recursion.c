#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Entry point of the program
 *
 * @s: function that returns the length of a string
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0') /*Base case so its not infinite*/
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
