#include "function_pointers.h"
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{

int counter;
counter = 0;

for (counter = 0; counter < size; counter++)
{
    action(array[counter]);
}

}
