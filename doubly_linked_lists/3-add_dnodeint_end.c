#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code
 *
 * @head: function that adds a new node at the end of a dlistint_t list
 * @n: function that adds a new node at the end of a dlistint_t list
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	/*assigning the data to newNode*/
	newNode->n = n;
	/*assignig NULL to next of newNode*/
	newNode->next = NULL;
	/*if the linked lisst is empty - newNode will be head node*/
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp =	temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
