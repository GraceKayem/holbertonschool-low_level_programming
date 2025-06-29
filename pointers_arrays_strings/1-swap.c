#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point of the program
 *
 * @a: function that swaps the values of two integers
 * @b: function that swaps the values of two integers
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int swaps;
swaps = *a;
*a = *b;
*b = swaps;
}
