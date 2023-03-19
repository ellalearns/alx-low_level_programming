#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints second half of string
 * @str: the string
*/
void puts_half(char *str)
{
int counter;
int n;

counter = 0;

while (str[counter])
{
counter++;
}


if ((counter % 2) == 0)
{
n = counter / 2;
}
else
{
n = (counter + 1) / 2;
}

for (n = n; n < counter; n++)
{
printf("%c", str[n]);
}

printf("\n");
}
