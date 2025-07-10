#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point of the program
 *
 * @str: returns a pointer to a newly allocated space in memory
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
int length = 0;
int i;
char *copy;

/*checking if the input is NULL*/
if (str == NULL)
{
return (NULL);
}

/*counting length of string*/
while (str[length] != '\0');
length++;

/*allocating memory using malloc*/
copy = malloc(sizeof(char) * (length + 1));
if (copy == NULL)
{
return (NULL);
}

/*copying the string and all characters*/
for (i = 0; i <= length; i++)
{
copy[i] = str[i];
}
return (copy);
}
