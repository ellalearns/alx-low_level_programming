#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: first arg
 * @n: second arg
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list numbers;
    unsigned int i;

    va_start(numbers, n);
    for (i = 0; i < n; i++)
    {
        if (separator == NULL)
        {
            printf("%d", va_arg(numbers, int));
        }

        if (i != (n - 1))
        {
        printf("%d%s", va_arg(numbers, int), separator);
        }
    }

    va_end(numbers);

    printf("\n");

}
