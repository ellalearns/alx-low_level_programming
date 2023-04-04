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

if (size == 0)
{
return (NULL);
}

string = malloc(sizeof(char) * size);

if (string == NULL)
{
return (NULL);
}

string[0] = c;

return string;
}
