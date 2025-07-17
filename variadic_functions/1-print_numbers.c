#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point of the program
 *
 * @separator: function that prints numbers
 * @n: followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
/*declaring a va list variable*/
va_list arg;
unsigned int i; /*loop*/
int num; /*to print the numbers*/

/*initialising the va list*/
va_start(arg, n);

/*looping through the arguments*/
for (i = 0; i < n; i++)
{
num = va_arg(arg, int);
printf("%d", num);

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(arg);
printf("\n");
}
