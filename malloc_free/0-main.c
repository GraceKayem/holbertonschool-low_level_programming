#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char *a;

a = create_array(5, 'H');
if (a == NULL)
{
printf("Failed to allocate memory\n");
return (1);
}
for (int i = 0; i < 5; i++)
putchar(a[i]);
putchar('\n');

free(a);
return (0);
}
