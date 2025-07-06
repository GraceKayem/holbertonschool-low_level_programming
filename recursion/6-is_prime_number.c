#include "main.h"
#include <stdio.h>

/**
 * prime - Entry point of the program
 *
 * @n: function that returns 1 if the input integer
 * @i: is a prime number, otherwise return 0
 *
 * Return: Always 0 (Success)
 */
int prime(int n, int i)
{
/*if input integer is  a prime number, it will return 1*/
if (i * i > n)
{
return (1);
}
if (n % i == 0) /*if divisible, not prime*/
{
return (0);
}
return (prime(n, i + 1));
}

/**
 * is_prime_number - Entry point of the program
 *
 * @n: returns 1 if the input integer is a prime number
 *
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
if (n <= 1) /*negative numbers are not prime*/
{
return (0);
}
return (prime(n, 2)); /*start checking from 2*/
}
