#include "function_pointers.h"
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{

int elemNum;
int counter;
counter = 0;
elemNum = size / 4;

for (counter = 0; counter < elemNum; counter++)
{
    action(array[counter]);
}

}
