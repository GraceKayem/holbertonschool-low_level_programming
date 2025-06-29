#include "main.h"

/**
 * print_square - Entry point of the program
 *
 * @size: function that checks for uppercase character
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int length;
int width;
if (size <= 0)
{
_putchar('\n');
return;
}
for (length = 0; length < size; length++)
{
for (width = 0; width < size; width++)
{
_putchar('#');
}
_putchar('\n');
}
}
