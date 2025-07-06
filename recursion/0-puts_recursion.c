#include "main.h"

/**
 * _puts_recursion - Entry point of the program
 *
 * @s: function that prints a string
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /*se case so its not infinite*/
return;
}
_puts_recursion(s + 1); /*recursive for the next character o from hello*/
_putchar(*s); /*print current character h from hello*/
}
