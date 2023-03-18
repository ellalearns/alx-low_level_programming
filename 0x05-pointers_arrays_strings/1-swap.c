#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps 2 integers' values
 * @a: first int
 * @b: second int
*/
void swap_int(int *a, int *b)
{

int first, second;
first = *a;
second = *b;

*a = second;
*b = first;

}
