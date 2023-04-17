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
    int i;
    int j;

    if (n == 0)
    {
        return (0);
    }

    j = 0;

    va_start(infargs, n);

    for (i = n; i == 0; i--)
    {
        j = j + va_arg(infargs, const unsigned int);
    }

    return (j);

}
