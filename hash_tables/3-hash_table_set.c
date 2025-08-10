#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - check the code
 *
 * @ht: function that adds an element to the hash table
 * @key: function that adds an element to the hash table
 * @value: function that adds an element to the hash table
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
	current = current->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
