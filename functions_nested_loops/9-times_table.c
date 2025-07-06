#include "main.h"
/**
 * times_table - Entry point of the program
 *
 * Description: function that prints the 9 times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int row, col, prod;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
prod = row * col;
if (col == 0)
{
_putchar(prod + '0');
}
else
{
_putchar(',');
_putchar(' ');
if (prod < 10)
{
_putchar(' ');
}
else
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}
}
