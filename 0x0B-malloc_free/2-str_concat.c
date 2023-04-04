#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - func
 * @s1: param
 * @s2: param
 * Return: char
*/
char *str_concat(char *s1, char *s2)
{
char *newString;
char i;
char len;
char counter;


i = 0;
len = 0;
counter = 0;


if (s1 == NULL)
{
len = 0;
}
else if (s1 != NULL)
{
while (s1[len])
{
len++;
}
}

if (s2 == NULL)
{
len = len;
}
else if (s2 != NULL)
{
while (s2[len])
{
len++;
}
}

newString = malloc(sizeof(char) * (len + 1));

while (s1[i])
{
newString[i] = s1[i];
i++;
}

i = i + 1;

while (s2[counter])
{
newString[i] = s2[counter];
counter++;
i++;
}

return (newString);
}
