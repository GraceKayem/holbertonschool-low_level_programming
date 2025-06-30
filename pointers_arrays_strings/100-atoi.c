#include "main.h"
#include <stdio.h>

/**
 * _atoi - Entry point of the program
 *
 * @s: function that checks for uppercase character
 *
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
int count = 0;
int sign = 1;
int evaldone = 0;
int evalnum = 0;
int digit;
unsigned int finalnum = 0;
for (count = 0; s[count] != '\0'; count++)
{
if (s[count] == '-')
{
sign *= -1;
}
else if (s[count] >= '0' && s[count] <= '9')
{
digit = s[count] - '0';
finalnum = finalnum * 10 + digit;
evaldone = 1;
}
else if (evaldone == 1)
{
break;
}
}
evalnum = sign *finalnum;
return (evalnum);
}
