#include <stdio.h>


/**
 * main - to get positive or negative print
 * Return: 0 because i said so
*/
int main(void)
{
int digit;
digit = 0;

while (digit < 10)
{
putchar('0' + digit);
digit = digit + 1;
}
putchar('\n');
return (0);
}
