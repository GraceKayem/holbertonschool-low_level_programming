#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: 1-alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
