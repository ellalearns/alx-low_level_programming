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
int i, len, counter;
i = len = counter = 0;
if (s1 != NULL)
{
while (s1[len])
len++;
}
if (s2 != NULL)
{
while (s2[len])
len++;
}
newString = malloc(sizeof(char) * (len + 1));
if (newString == NULL)
return(NULL);
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
