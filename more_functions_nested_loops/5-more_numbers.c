#include "main.h"

/**
 * more_numbers - Entry point of the program
 *
 * Description: function that checks for uppercase character
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void) {
int lines;
Int num;
for (lines = 0; lines < 10; lines++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar('0' + num / 10);
_putchar('0' + num % 10);
}
_putchar('\n');
}
}
