#include "main.h"
#include <stdio.h>

/**
 * prime_number_helper_func - a helper function
 * @n: the integer
 * @i: iterator
 * Return: an integer
*/
int prime_number_helper_func(int n, int i)
{
if (n == i)
{
return (1);
}
else
{
if (n % i == 0)
{
return (1 + prime_number_helper_func(n, i + 1));
}
else
{
return (0 + prime_number_helper_func(n, i + 1));
}
}
}

/**
 * is_prime_number - checks for a prime number
 * @n: the integer
 * Return: 1 or 0 depending on the result
*/
int is_prime_number(int n)
{
if (n < 0)
{
return (0);
}
else if (n == 1)
{
return (0);
}
else
{
if (prime_number_helper_func(n, 2) > 1)
{
return (0);
}
else
{
return (1);
}
}
}
