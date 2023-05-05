#include <stdio.h>
#include "main.h"

/**
 * print_binary - function
 * @n: argument
 * Return: nil
*/
void print_binary(unsigned long int n)
{
unsigned long int nowBit;
int counter, iterator;
counter = 0;
iterator = 0;

for (iterator = 70; iterator >= 0; iterator--)
{
nowBit = n >> iterator;

if (nowBit & 1)
{
_putchar('1');
counter++;
}
else if (counter != 0)
{
_putchar('0');
}
}

if (counter == 0)
{
_putchar('0');
}
}
