#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: print_base16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num16;
for (num16 = '0'; num16 <= '9'; num16++)
{
putchar(num16);
}
for (num16 = 'a'; num16 <= 'f'; num16++)
{
putchar(num16);
}
putchar('\n');
return (0);
}
