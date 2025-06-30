#include "main.h"

/**
 * puts_half - Entry point of the program
 *
 * @str: function that prints half of a string
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int stringLength = 0;
int firstChar;
int halfString;
while (str[stringLength] != '\0')
{
stringLength++;
}
if (stringLength % 2 == 0)
{
halfString = stringLength / 2;
}
else
{
halfString = (stringLength + 1) / 2;
}
for (firstChar = halfString; firstChar < stringLength; firstChar++)
{
_putchar(str[firstChar]);
}
_putchar('\n');
}
