#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 *
 * @head: function that frees a list_t list
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode->str);
		free(currentNode);
	}
}
