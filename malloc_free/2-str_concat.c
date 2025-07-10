#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Entry point of the program
 *
 * @s1: function that concatenates two strings
 * @s2: function that concatenates two strings
 *
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
char *concate;
int length1 = 0;
int length2 = 0;
int i;
int j;
/*checking if the input is NULL*/
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
/*moving pointer to the end of dest string*/
while (s1[length1] != '\0')
{
length1++;
}
while (s2[length2] != '\0')
{
length2++;
}
/*allocating memory*/
concate = malloc(sizeof(char) * (length1 + length2 + 1));
if (concate == NULL)
{
return (NULL);
}
/*copying s1 and s2 to concat*/
for (i = 0; i < length1; i++)
{
concate[i] = s1[i];
}
for (j = 0; j < length2; j++)
{
concate[i + j] = s2[j];
}
concate[i + j] = '\0';
return (concate);
}
