#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - func
 * @size: first param
 * @c: second param
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
char *string;
int i;

if (size == 0)
{
return (NULL);
}

string = malloc(sizeof(char) * size);

if (string == NULL)
{
return (NULL);
}

i = 0;

while (string[i])
{
string[i] = c;
i++;
}

return (string);
}
