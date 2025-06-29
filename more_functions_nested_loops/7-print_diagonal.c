#include "main.h"

/**
 * print_diagonal - Entry point of the program
 *
 * @n: function that checks for uppercase character
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
