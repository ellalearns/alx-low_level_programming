#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function
 * @b: first arg
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int decNum;
int counter;

if (!b)
{
return (0);
}
else
{
counter = 0;
while(b[counter])
{
if (b[counter] < '0' || b[counter] > '1')
{
return (0);
}
else
{
decNum = (2 * decNum) + (b[counter] - '0');
}
counter++;
}
}
return (decNum);
}
