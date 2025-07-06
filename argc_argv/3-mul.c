#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * @argc: program that multiplies two numbers
 * @argv: program that multiplies two numbers
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/*converting the arguments to integers*/
int num1;
int num2;
int sum; /*will hold the result*/

if (argc != 3)
{
printf("Error\n");
return (1);
}

/*converting arguments to integers*/
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
/*multiplying num1 and num2*/
sum = num1 *num2;

/*printing the sum of num1 * num2*/
printf("%d\n", sum);

return (0);
}
