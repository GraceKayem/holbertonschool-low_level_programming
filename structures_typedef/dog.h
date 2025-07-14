#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point of the program
 *
 * @name: Define a new type struct dog
 * @age: Define a new type struct dog
 * @owner: Define a new type struct dog
 *
 * Return: Always 0 (Success)
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Define dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
