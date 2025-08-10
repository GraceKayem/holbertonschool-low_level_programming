#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - check the code
 *
 * @ht: function that deletes a hash table
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *node;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}

	for (count = 0; count < ht->size; count++)
	{
	node = ht->array[count];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	free(ht);
}
