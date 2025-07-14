#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog_t struct
 *
 * @d: Pointer to the dog_t struct to free
 *
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
