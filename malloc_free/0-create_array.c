#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point of the program
 *
 * @size: function that creates an array of chars
 * @c:  and initializes it with a specific char
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
return (NULL);
}

/*allocating memory to the array*/
array = malloc(size);

/*will output NULL if a pointer is not returned to the array or fails*/
if (array == NULL)
{
return (NULL);
}

/*filling array with the character c*/
for (i = 0; i < size; i++)
{
array[i] = c;
}

/*returning pointer*/
return (array);
}
