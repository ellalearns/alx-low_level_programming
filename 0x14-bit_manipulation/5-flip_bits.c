#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function
 * @n: argument
 * @m: next argument
 * Return: unsigned integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int counter;
unsigned long int nowBit;
unsigned long int nxm;
int iterator;

nxm = n ^ m;
counter = 0;

for (iterator = 60; iterator >= 0; iterator--)
{
nowBit = (nxm >> iterator);
if (nowBit & 1)
{
counter++;
}
}

return (counter);
}
