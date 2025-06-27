#include "main.h"

/**
 * print_alphabet_x10 - Entry point of the program
 *
 * Description: prints 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char print_alphabet;
int count = 0;
while (count++ < 10)
{
for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
{
_putchar(print_alphabet);
}
_putchar('\n');
}
}
