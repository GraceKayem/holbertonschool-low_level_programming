#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: print_alphabet
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
return (0);
}
