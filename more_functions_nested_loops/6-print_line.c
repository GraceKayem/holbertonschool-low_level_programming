#include "main.h"

/**
 * print_line - Entry point of the program
 *
 * @n: function that draws a straight line in the terminal
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
