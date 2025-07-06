#include "main.h"
#include <stdio.h>

/**
 * factorial - Entry point of the program
 *
 * @n: returns the factorial of a given number
 *
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
if (n < 0) /*checking if the number is negative*/
{
return (-1);
}
if (n == 0) /*base case: factorial of 0 is defined as 1*/
{
return (1);
}
/*recursive case*/
/*multiplying current n by factorial of n - 1*/
return (n * factorial(n -1));
}
