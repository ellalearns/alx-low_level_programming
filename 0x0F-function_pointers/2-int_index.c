#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - func desp
 * @array: first param
 * @size: second param
 * @cmp: func ptr
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{

int counter;

if (size <= 0)
{
return (-1);
}

for (counter = 0; counter < size; counter++)
{

if (cmp(array[counter]))
{
return (counter);
}

}

return (-1);

}
