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
int len1, len2, counter;
len1 = len2 = counter = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
newString = malloc(sizeof(char) * (len1 + len2 + 1));
if (newString == NULL)
return (NULL);
len1 = len2 = 0;
while (s1[len1])
{
newString[len1] = s1[len1];
len1++;
}
while (s2[len2])
{
newString[len1] = s2[len2];
len1++;
len2++;
}
return (newString);
}
