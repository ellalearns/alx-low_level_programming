#include <stdio.h>
#include "main.h"

/**
 * set_bit - function
 * @n: first arg
 * @index: second arg
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int comp;
comp = 1;

if (index >= 64)
{
return (-1);
}

*n = (comp << index) | *n;

return (1);

}
