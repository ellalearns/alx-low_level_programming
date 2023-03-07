#include <stdio.h>
#include "main.h"

/**
 *_memcpy - looking for what
 *@dest: first param
 *@src: second param
 *@n: third param
 *
 *Return: because I said so?
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
