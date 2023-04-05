#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - func
 * @b: param
*/
void *malloc_checked(unsigned int b)
{
void *mallocPointer;

mallocPointer = malloc(b);

if (mallocPointer == NULL)
{
exit(98);
}

return (mallocPointer);
}
