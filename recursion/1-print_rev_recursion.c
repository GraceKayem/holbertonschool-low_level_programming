#include "main.h"

/**
 * _print_rev_recursion - Entry point of the program
 *
 * @s: function that prints a string in reverse
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0') /*Base case so s not infinite*/
{
return;
}
/*recursive call with the next character o from olleh*/
_print_rev_recursion(s + 1);
/*print character after recursive call (reverses order*/
_putchar(*s);
}
