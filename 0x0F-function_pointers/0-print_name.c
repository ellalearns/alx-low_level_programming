#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: a pointer to a function
*/
void print_name(char *name, void (*f)(char *))
{

f(name);

}
