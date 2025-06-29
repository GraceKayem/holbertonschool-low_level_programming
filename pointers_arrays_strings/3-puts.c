#include "main.h"

/**
 * _puts - Entry point of the program
 *
 * @str: function that prints a string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
