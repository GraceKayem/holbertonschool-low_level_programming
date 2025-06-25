#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: print tebahpla
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int alph_rev;
for (alph_rev = 'z'; alph_rev >= 'a'; alph_rev--)
{
putchar(alph_rev);
}
putchar('\n');
return (0);
}
