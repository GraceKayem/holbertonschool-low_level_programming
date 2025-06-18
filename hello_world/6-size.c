#include <stdio.h>

/**
 * main - 6-size.c
 * Description: You should produce the exact same output as in the example
 * Return: should return 0
 */

int main(void)
{
printf("Size of int: %lu 4 byte(s)\n", sizeof(int));
printf("Size of char: %lu 1 byte(s)\n", sizeof(char));
printf("Size of long int: %lu 4 byte(s)\n", sizeof(long int));
printf("Size of long long int: %lu 8 byte(s)\n", sizeof(long long int));
printf("Size of float: %lu 4 byte(s)\n", sizeof(float));

return (0);
}
