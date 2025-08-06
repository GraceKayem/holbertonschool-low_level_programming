#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 *
 * @head: function that adds a new node at the end of a list_t list
 * @str: function that adds a new node at the end of a list_t list
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
	lastNode = *head;
	/*last node's next address will be NULL*/
	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	/*add the newNode at the end of the linked list*/
	lastNode->next = newNode;
	}
	return (newNode);
}
