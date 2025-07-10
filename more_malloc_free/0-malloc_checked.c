#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Entry point of the program
 *
 * @b: function that allocates memory using malloc
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
/*this pointer will hold the address of the allocated memory*/
void *ptr;

/*allocating b bytes of memory*/
ptr = malloc(b);

/*condition to check if mollac fails by checking if the ptr is NULL*/
if (ptr == NULL)
{
/*if fails, exit status will be 98*/
/*program will terminate to avoid undefined behavior*/
exit(98);
}
/*pointer returns to the allocated memory if successful*/
return (ptr);
}
