#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - check the code
 *
 * @str: hash function implementing the djb2 algorithm
 *
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int storeHash; /*will store the hash*/
	int count;

	storeHash = 5381; /*initialising the storeHash variable to 5381*/

	/*Loop to iterates through each character */
	for (count = 0; str[count] != '\0'; count++)
	{
	/*multiplying it by 33*/
	storeHash = ((storeHash << 5) + storeHash) + str[count];
	}

	return (storeHash); /*returns the finial hash value*/
}
