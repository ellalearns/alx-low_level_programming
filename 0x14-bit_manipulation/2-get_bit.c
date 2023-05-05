#include <stdio.h>
#include "main.h"

/**
 * get_bit - function
 * @n: first arg
 * @index: second arg
 * Return: integer bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bitNum;

if (index >= 64)
{
return (-1);
}
bitNum = (n >> index) & 1;
return (bitNum);
}
