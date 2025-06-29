#include "main.h"

/**
 * print_most_numbers - Entry point of the program
 *
 * Description: function that checks for uppercase character
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
{
if (num != 2 && num != 4)
_putchar(num + '0');
}
_putchar('\n');
}
