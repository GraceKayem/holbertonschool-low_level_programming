#include "main.h"
#include <stdio.h>

/**
 * square_root - Entry point of the program
 * @n: function returns the natural square root of a number
 * @check: function returns the natural square root of a number
 *
 * Return: Always 0 (Success)
 */
int square_root(int n, int check)
{
/*if check square equals to n, it will return check*/
if (check * check == n)
{
return (check);
}
/*if check square exceeds n, no natural square root */
if (check * check > n)
{
return (-1);
}
return (square_root(n, check + 1)); /*will try the next number*/
}

/**
 * _sqrt_recursion - Entry point of the program
 * @n: function returns the natural square root of a number
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
/*Base case: negative numbers dont have natural square roots*/
if (n < 0)
{
return (-1);
}
return (square_root(n, 0)); /*will check from 0 upwards*/
}
