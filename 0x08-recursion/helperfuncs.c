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
