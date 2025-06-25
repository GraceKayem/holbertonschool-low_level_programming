#include "main.h"
/**
 * main - Entry point of the program
 *
 * print_alphabet - make the alphabet in lowercase
 *
 * Description: function that prints the alphabet
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
