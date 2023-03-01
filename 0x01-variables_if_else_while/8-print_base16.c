#include <stdio.h>


/**
 * main - to get positive or negative print
 * Return: 0 because i said so
*/
int main(void)
{
int digit;
char octal;

digit = 0;
octal = 'a';

while (digit < 16)
{
if (digit < 10)
{
putchar('0' + digit);
}
else
{
putchar(octal);
octal = octal + 1;
}
digit = digit + 1;
}
putchar('\n');
return (0);
}
