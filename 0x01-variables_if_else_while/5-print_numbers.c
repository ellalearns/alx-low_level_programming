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
printf("%d", digit);
digit = digit + 1;
}
printf("\n");
return (0);
}
