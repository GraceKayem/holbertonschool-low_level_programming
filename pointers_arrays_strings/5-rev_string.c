#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point of the program
 *
 * @s: function that reverses a string
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
int stringLength = 0;
int firstChar;
char revString;
while (s[stringLength] != '\0')
{
stringLength++;
}
for (firstChar  = 0; firstChar  < stringLength / 2; firstChar++)
{
revString = s[firstChar];
s[firstChar] = s[stringLength - 1 - firstChar];
s[stringLength - 1 - firstChar] = revString;
}
}
