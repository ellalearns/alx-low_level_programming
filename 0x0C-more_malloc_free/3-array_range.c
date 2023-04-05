#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - func
 * @min: first param
 * @max: second param
 * Return: pointer to malloc
*/
int *array_range(int min, int max)
{
int *intArray;
int len;
int i;

if (min > max)
{
return (NULL);
}

len = (max - min) + 1;

intArray = malloc(sizeof(int) * len);

if (intArray == NULL)
{
return (NULL);
}

i = 0;

for (i = 0; i < len; i++)
{
intArray[i] = min;
min++;
}

return (intArray);
}
