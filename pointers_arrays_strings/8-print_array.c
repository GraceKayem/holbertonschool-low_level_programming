#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point of the program
 *
 * @a: function that checks for uppercase character
 * @n:
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int print;
for (print = 0; print < n; print++)
printf("%d", a[print]);
{
if (print < n - 1)
{
printf(", ");
}
}
printf("\n");
}
