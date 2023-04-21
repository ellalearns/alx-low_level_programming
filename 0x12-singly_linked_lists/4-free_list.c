#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function
 * @head: argument
*/
void free_list(list_t *head)
{
    if (!head)
    {
        return (NULL);
    }
    
    free(head);
}
