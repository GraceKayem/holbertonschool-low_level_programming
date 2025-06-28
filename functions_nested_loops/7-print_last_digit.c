#include "main.h"

/**
 * print_last_digit - Entry point of the program
 *
 * @n: function that prints the last digit of a number
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar(last_digit + '0');
return (last_digit);
}
