#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - function 
 * @h: argument
 * Return: returns a size_t
*/
size_t print_list(const list_t *h)
{
    size_t counter = 0;

    while (h)
    {
        if (h->str)
        {
            printf("[%u] %s\n", h->len, h->str);
            h = h->next;
            counter++;
        }
        else
        {
            printf("[0] (nil)\n");
        }
    }

    return (counter);

}
