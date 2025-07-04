#include "main.h"
#include <stdio.h>

/**
 * leet - check the code for
 *
 * @encode: function that encodes a string into 1337
 *
 * Return: Always 0.
 */
char *leet(char *encode)
{
int outer;
int inner;
char letters[] = "aAeEoOtTlL";
char num[] = "4433007711";
for (outer = 0; encode[outer] != '\0'; outer++)
{
for (inner = 0; letters[inner] != '\0'; inner++)
{
if (encode[outer] == letters[inner])
{
encode[outer] = num[inner];
break;
}
}
}
return (encode);
}
