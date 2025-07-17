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
switch (format[i])
{
case 'c':
printf("%s%c", printall, va_arg(arg, int));
printall = ", ";
break;
case 'i':
printf("%s%d", printall, va_arg(arg, int));
printall = ", ";
break;
case 'f':
printf("%s%f", printall, va_arg(arg, double));
printall = ", ";
break;
case 's':
string = va_arg(arg, char *);
if (string == NULL)
string = "(nil)";
printf("%s%s", printall, string);
printall = ", ";
break;
}
i++;
}

va_end(arg);
printf("\n");
}
