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

if (str == NULL)
{
return (NULL);
}

newStr = malloc(sizeof(str));

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
