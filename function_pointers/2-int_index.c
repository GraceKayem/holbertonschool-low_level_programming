#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Entry point of the program
 *
 * @array: function that searches for an integer
 * @size: function that searches for an integer
 * @cmp: function that searches for an integer
 *
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

/*checking for invalid input*/
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}

/*looping through the array and applying cmp to each elements*/
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
