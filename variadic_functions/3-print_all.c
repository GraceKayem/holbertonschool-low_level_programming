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
int i = 0;
char *string;
int print_all = 0;
va_start(arg, format);
while (format && format[i])
{
i++;
}
if (print_all)
{
printf(",");
}
if (format[i] == 'c')
{
printf("%c", va_arg(arg, int));
}
if (format[i] == 'i')
{
printf("%d", va_arg(arg, int));
}
if (format[i] == 'f')
{
printf("%f", va_arg(arg, double));
}
if (format[i] == 's')
{
string = va_arg(arg, char *);
if (!string)
{
printf("nill");
}
else
{
printf("%s", string);
}
}
}
