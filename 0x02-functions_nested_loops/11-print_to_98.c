#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n : integer
*/
void print_to_98(int n)
{
int tempN;
if (n < 98)
{
tempN = n;
for (tempN; tempN <= 98; tempN++)
{
if (tempN == 98)
{
printf("%d", tempN);
}
else
{
printf("%d, ", tempN);
}
}
}
if (n > 98)
{
tempN = n;
for (tempN; tempN >= 98; tempN--)
{
if (tempN == 98)
{
printf("%d", tempN);
}
else
{
printf("%d, ", tempN);
}
}
}
printf("\n");
}
