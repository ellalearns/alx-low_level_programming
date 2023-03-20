#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - different
 * @s: first parameter
 * @accept: obviously the second one
 * Return: thinking about many things
 */

char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return ('\0');
}
