#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Entry point of the program
 *
 * @name: function that creates a new dog
 * @age: function that creates a new dog
 * @owner: function that creates a new dog
 *
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
char *cpName, *cpOwner;
int nameLength = 0, ownerLength = 0, i;
/*calculating the length*/
while (name && name[nameLength] != '\0')
{
nameLength++;
}
while (owner && owner[ownerLength] != '\0')
{
ownerLength++;
}
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
cpName = malloc(sizeof(char) * (nameLength + 1));
if (cpName == NULL)
{
free(newDog);
return (NULL);
}
cpOwner = malloc(sizeof(char) * (ownerLength + 1));
if (cpOwner == NULL)
{
free(cpName);
free(newDog);
return (NULL);
}
/*coping name na downer*/
for (i = 0; i < nameLength; i++)
{
cpName[i] = name[i];
}
cpName[i] = '\0';
for (i = 0; i < ownerLength; i++)
{
cpOwner[i] = owner[i];
}
cpOwner[i] = '\0';
newDog->name = cpName;
newDog->age = age;
newDog->owner = cpOwner;
return (newDog);
}
