#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - check the code
 *
 * @size: function that gives you the index of a key
 * @key: function that gives you the index of a key
 *
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = 0;

	index = hash_djb2((unsigned char *)key);

	return (index % size);
}
