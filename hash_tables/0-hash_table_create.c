#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 *
 * @size: function that creates a hash table
 *
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int count;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	/*Storing the size parameter into the struct size field*/
	ht->size = size;

	/*allocating the memory of pointer to pointer*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	
	/*if malloc fails*/
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		ht->array[count] = NULL;
	}

	return (ht);
}
