#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Entry point of the program
 *
 * @s1: function that concatenates two strings
 * @s2: function that concatenates two strings
 * @n: function that concatenates two strings
 *
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int length1 = 0;
unsigned int length2 = 0;
unsigned int i;
unsigned int j;
if (s1 == NULL)
{/*if NULL is passed, treat it as an empty string*/
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[length1] != '\0')
{/*Calculate length of s1*/
length1++;
}
while (s2[length2] != '\0')
{/* Calculate length of s2 */
length2++;
}
if (n > length2)
{
n = length2;
}
concat = malloc(sizeof(char) * (length1 + n + 1));
if (concat == NULL)
{/*allocating memory for concatenated string + null terminator*/
return (NULL);
}
for (i = 0; i < length1; i++)
{/*copying s1 and s2 to concat*/
concat[i] = s1[i];
}
for (j = 0; j < n; j++)
{
concat[i + j] = s2[j];
}
concat[i + j] = '\0';
return (concat);
}
