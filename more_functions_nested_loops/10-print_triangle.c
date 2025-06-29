#include "main.h"

/**
 * print_triangle - Entry point of the program
 *
 * @size: function that checks for uppercase character
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int length, width;
if (size <= 0)
{
_putchar('\n');
return;
}
for (length = 0; length < size; length++)
{
for (width = 0; width < size - length - 1; width++)
_putchar(' ');
for (width = 0; width < length + 1; width++)
_putchar('#');
_putchar('\n');
}
}
