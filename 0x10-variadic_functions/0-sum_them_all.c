#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: arg
 * Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
va_list infargs;
unsigned int i;
unsigned int j;

if (n == 0)
{
return (0);
}

j = 0;

va_start(infargs, n);

for (i = 0; i < n; i++)
{
j += va_arg(infargs, int);
}

return (j);

}
