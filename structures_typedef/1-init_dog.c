#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Entry point of the program
 *
 * @d: function that initialize a variable of type struct dog
 * @name: function that initialize a variable of type struct dog
 * @age: function that initialize a variable of type struct dog
 * @owner: function that initialize a variable of type struct dog
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
