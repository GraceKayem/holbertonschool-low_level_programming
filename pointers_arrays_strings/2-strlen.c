#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point of the program
 *
 * @s: function that returns the length of a string
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int length = 0;
for (; *s++;)
length++;
return (length);
}
