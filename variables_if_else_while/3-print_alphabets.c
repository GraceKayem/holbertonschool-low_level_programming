#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: print alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
