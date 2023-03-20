#include "main.h"
#include <stdio.h>

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
