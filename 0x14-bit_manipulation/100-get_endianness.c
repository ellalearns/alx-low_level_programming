#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function
 * Return: integer
*/
int get_endianness(void)
{
char *str;
unsigned int iterator;

iterator = 1;
str = (char *) & iterator;

return (*str);
}
