#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Entry point of the program
 *
 * @x: function that returns the value of x
 * @y:  raised to the power of y
 *
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
if (y < 0) /*checking if the number is negative*/
{
return (-1);
}
if (y == 0) /*base case: x to the power of y*/
{
return (1);
}
/*recursive case: multiply x by x (y-1)*/
return (_pow_recursion(x, y - 1) * x);
}
