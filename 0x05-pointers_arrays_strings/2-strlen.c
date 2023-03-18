#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return : the length of string
*/
int _strlen(char *s)
{

int len;
len = 0;

while (s[len])
{

len = len + 1;

}

return (len);

}
