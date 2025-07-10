#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Entry point of the program
 *
 * @min: function that creates an array of integers
 * @max: function that creates an array of integers
 *
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
int size;
int *arr;
int i;

/*returns NULL is min is greater than max*/
if (min > max)
{
return (NULL);
}

/*calculating the size of array*/
size = max - min + 1;

/*allocating memory for the size integer*/
arr = malloc(sizeof(int) * size);
/*checcking if allocation is successful*/
if (arr == NULL)
{
return (NULL);
}

/*for loop to fill the array with values for min and max*/
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}

return (arr);
}
