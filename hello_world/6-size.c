#include <stdio.h>

/**
 * main - 6-size.c
 * Description: You should produce the exact same output as in the example
 * Return: should return 0
 */

int main(void)
{
printf("Size of char: %zu 1 byte(s)\n", sizeof(char));
printf("Size of int: %zu 4 byte(s)\n", sizeof(int));
printf("Size of long int: %zu 4 byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu 8 byte(s)\n", sizeof(long long int));
printf("Size of float: %zu 4 byte(s)\n", sizeof(float));

return (0);
}
