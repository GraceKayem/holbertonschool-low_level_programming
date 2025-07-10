#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Entry point of the program
 *
 * @nmemb: function that allocates memory for an array, using malloc
 * @size: function that allocates memory for an array, using malloc
 *
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

/*return NULL*/
if (nmemb == 0 || size == 0)
{
return (NULL);
}

/*allocating memory*/
ptr = malloc(nmemb * size);

/*checking if malloc has failed*/
if (ptr == NULL)
{
return (NULL);
}

/*setting memory to zero*/
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return ((void *) ptr);
}
