#include <stdio.h>
#include "main.h"

/**
 * print_sign: prints the sign of a number
 * @n : integer that will be checked for sign
 * Return: 1, 0, or -1 depending on sign of number
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
