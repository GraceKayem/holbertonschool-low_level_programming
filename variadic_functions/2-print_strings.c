#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry point of the program
 *
 * @separator: function that prints strings
 * @n: function that prints strings
 *
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
/*declaring a va list variable*/
va_list arg;
unsigned int i; /*loop*/
char *string; /*will hold string*/

/*initialising the va list*/
va_start(arg, n);

/*looping through the arguments*/
for (i = 0; i < n; i++)
{
string = va_arg(arg, char *);/*getting the next string*/

if (string == NULL)
{
printf("(nil)"); /*If the string is NULL will print "nil"*/
}
else
{
printf("%s", string);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(arg);
printf("\n");
}
