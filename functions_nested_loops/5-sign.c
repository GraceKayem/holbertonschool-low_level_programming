#include "main.h"

/**
 * print_sign - Entry point of the program
 *
 *@n: prints the sign of a number
 *
 * Return: Return: Always 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
