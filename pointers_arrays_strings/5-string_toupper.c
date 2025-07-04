#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 * @letters: changes all lowercase letters of a string to uppercase
 *
 * Return: Always 0.
 */
char *string_toupper(char *letters)
{
int lowerCase;
for (lowerCase = 0; letters[lowerCase] != '\0'; lowerCase++)
{
if (letters[lowerCase] >= 'a' && letters[lowerCase] <= 'z')
{
letters[lowerCase] = letters[lowerCase] - 32;
}
}
return (letters);
}
