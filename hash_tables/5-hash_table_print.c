#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - check the code
 *
 * @ht: function that prints a hash table
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
	{
		return;
	}

	putchar('{');

	for (count = 0; count < ht->size; count++)
	{
	node = ht->array[count];
		while (node)
		{
			if (!first)
			{
				printf(", ");
			}
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->next;
		}
	}

	printf("}");
}
