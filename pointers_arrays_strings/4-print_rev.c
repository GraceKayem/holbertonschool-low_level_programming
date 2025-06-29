#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point of the program
 *
 * @c: function that prints a string, in reverse
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int length = 0;
int reverse;
while (s[length] != '\0')
length++;
for (reverse = length - 1; reverse >= 0; reverse--)
{
_putchar(s[reverse);
}
_putchar('\n');
}
