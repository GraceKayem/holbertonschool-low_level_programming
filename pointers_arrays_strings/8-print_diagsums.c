#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point of the program
 *
 * @a: sum of the two diagonals of a square matrix of integers
 * @size: sum of the two diagonals of a square matrix of integers
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int i;
int square1 = 0;
int square2 = 0;
for (i = 0; i < size; i++)
{
square1 += a[i * size + i];
square2 += a[i * size + (size - 1 - i)];
}
printf("%d, %dn", square1, square2);
}
