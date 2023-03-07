#include <stdio.h>
#include "main.h"

/**
 * _memset - whatever is here no concern u
 * @s: param a
 * @b: param b
 * @n: param c
 *
 * Return: disturb me not
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
