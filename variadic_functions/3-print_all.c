#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Entry point of the program
 *
 * @format: function that prints anything
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
va_list arg;
unsigned int i = 0;
char *string;
char *printall = "";
va_start(arg, format);
while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
{
printf("%s", printall);
if (format[i] == 'c')
printf("%c", va_arg(arg, int));
if (format[i] == 'i')
printf("%d", va_arg(arg, int));
if (format[i] == 'f')
printf("%f", va_arg(arg, double));
if (format[i] == 's')
{
string = va_arg(arg, char *);
if (string == NULL)
string = "(nil)";
printf("%s", string);
}
printall = ", ";
}
i++;
}

va_end(arg);
printf("\n");
}
