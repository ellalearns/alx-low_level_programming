#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - func
 * @str: param
 * Return: char
*/
char *_strdup(char *str)
{
char *newStr;
int i;
int len;

if (str == NULL)
{
return (NULL);
}


len = 0;

while (str[len])
{
len++;
}

newStr = malloc(sizeof(char) * len);

if (newStr == NULL)
{
return (NULL);
}

i = 0;

while (str[i])
{
newStr[i] = str[i];
i++;
}

return (newStr);

}
