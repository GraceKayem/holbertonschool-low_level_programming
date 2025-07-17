#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point of the program
 *
 * @n: function that returns the sum of all its parameters
 *
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
/*declaring a va_list to acces the variable arguments*/
va_list arg;
/*initialising a total sum variable*/
int sum = 0;
unsigned int i;

if (n == 0)
{
return (0);
}

/*initialising the va_list starting after n*/
va_start(arg, n);

for (i = 0; i < n; i++)
{
/*getting the next int from arguments*/
sum += va_arg(arg, int); /*adding it to the total*/
}

va_end(arg); /*cleaning up the va_list*/
return (sum);
}
