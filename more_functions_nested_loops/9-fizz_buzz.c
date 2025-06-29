#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: function that checks for uppercase character
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int fizzbuzz;
for (fizzbuzz = 1; fizzbuzz <= 100; fizzbuzz++)
{
if (fizzbuzz % 3 == 0 && fizzbuzz % 5 == 0)
{
printf("FizzBuzz");
}
else if (fizzbuzz % 3 == 0)
{
printf("Fizz");
}
else if (fizzbuzz % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", fizzbuzz);
}
if (fizzbuzz != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
