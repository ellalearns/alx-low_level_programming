#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string recursively
 * @s: the string
*/
void _puts_recursion(char *s)
{
if (s[0])
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
else
{
printf("\n");
}
}
