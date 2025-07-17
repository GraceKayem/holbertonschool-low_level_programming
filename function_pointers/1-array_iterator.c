#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point of the program
 *
 * @array: function that executes a function
 * @size: given as a parameter on
 * @action: each element of an array
 *
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

/*checking if array or action is NULL*/
if (array == NULL || action == NULL)
{
return;
}

/*looping each elements and applying the action function*/
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
