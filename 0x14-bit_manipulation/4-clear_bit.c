#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function
 * @n: argument
 * @index: another argument
 * Return: 1 or -1, basically
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int check;
check = 1;

if (index >= 64)
{
return (-1);
}

*n = ~((check << index) & *n);

return (1);
}
