#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string backwards
 * @s: the string
*/
void print_rev(char *s)
{

int len;
len = 0;

while (s[len])
{
len = len + 1;
}

for (len = len; len >= 0; len--)
{
printf("%c", s[len]);
}

}
