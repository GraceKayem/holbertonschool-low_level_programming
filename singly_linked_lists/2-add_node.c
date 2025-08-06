#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code
 *
 * @head: function that adds a new node at the beginning of a list_t list.
 * @str: function that adds a new node at the beginning of a list_t list.
 *
 * Return: Always 0.
 */
/*creating a new node*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

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
	if (newNode->str ==  NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	/*making the newNode point to the head node*/
	newNode->next = *head;
	/*making the new node as the first node*/
	*head = newNode;

	return (newNode);
}
