#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 *
 * @letters: function capitalizes all words of a string
 *
 * Return: Always 0.
 */
char *cap_string(char *letters)
{
int upperCase;
int checker;
char separators[] = " \t\n,;.!?\"(){}";
/*capitalise letters to uppercase*/
if (letters[0] >= 'a' && letters[0] <= 'z')
letters[0] -= 32;
while (letters[upperCase] != '\0')
{
for (checker = 0; separators[checker] != '\0'; checker++)
{
if (letters[upperCase] == separators[checker])
{
if (letters[upperCase + 1] >= 'a' && letters[upperCase + 1] <= 'z')
{
letters[upperCase + 1] -= 32;
}
}
}
upperCase++;
}
return (letters);
}
