#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point of the program
 *
 * @argc: program that adds positive numbers
 * @argv: program that adds positive numbers
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int sum = 0; /*will hold the result*/
int i;
int j;

/*if no number is passed to the program, print 0*/
if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
/*multiplying num1 and num2*/
sum += atoi(argv[i]);
}
/*printing the sum of num1 * num2*/
printf("%d\n", sum);
return (0);
}
