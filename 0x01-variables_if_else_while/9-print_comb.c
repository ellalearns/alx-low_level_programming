#include <stdio.h>


/**
 * main - to get positive or negative print
 * Return: 0 because i said so
*/
int main()
{
    int digit;
    digit = 0;

while (digit < 10)
{
if (digit == 0)
{
putchar('0' + digit);
}
else
{
putchar(',');
putchar(' ');
putchar('0'+digit);
}
digit = digit + 1;
}
    return (0);
}
