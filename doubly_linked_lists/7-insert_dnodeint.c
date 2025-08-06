#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 *
 * @h: function that inserts a new node at a given position
 * @idx: function that inserts a new node at a given position
 * @n: function that inserts a new node at a given position
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int count = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
	count++;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
