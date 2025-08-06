#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 *
 * @h: function that prints all the elements of a dlistint_t list
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /*print current node value*/
		h = h->next; /*move to the next node*/
		count++;
	}

	return (count);

}
