#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function description
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{

if (array == NULL || action == NULL)
{

return;

}

unsigned int counter;
counter = 0;

for (counter = 0; counter < size; counter++)
{
    action(array[counter]);
}

}
