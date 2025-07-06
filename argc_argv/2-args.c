#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * @argc: prints all arguments it receives
 * @argv: prints all arguments it receives
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", i, argv[i]);
}
printf("\n");
return (0);
}
