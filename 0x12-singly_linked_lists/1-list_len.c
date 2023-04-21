#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function
 * @h: argument
 * Return: size_t number of elements
*/
size_t list_len(const list_t *h)
{
size_t counter;
counter = 0;

if (!h)
{
return (counter);
}

while (h)
{
counter++;
h = h -> next;
}

return (counter);

}
