#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 *
 * @head: function that returns the nth node of a dlistint_t linked list
 * @index: function that returns the nth node of a dlistint_t linked list
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
	count++;
	head = head->next;
	}
	return (NULL);
}
