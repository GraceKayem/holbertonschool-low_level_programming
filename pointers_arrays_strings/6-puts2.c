#include "main.h"

/**
 * puts2 - Entry point of the program
 *
 * @str: function that prints every other character of a string
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int firstChar = 0;
for (firstChar = 0; str[firstChar] != '\0'; firstChar += 2)
{
_putchar(str[firstChar]);
}
_putchar ('\n');
}
