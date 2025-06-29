#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Entry point of the program
 *
 * @c: function that checks for a digit (0 through 9)
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
