#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;
int temp;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
