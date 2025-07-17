#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Entry point of the program
 *
 * @name: function that prints a name
 * @f: function that prints a name
 *
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
/*checking name and function pointer are valid*/
if (name != NULL && f != NULL)
{
f(name); /*calling the function and passing the name to it*/
}
}
