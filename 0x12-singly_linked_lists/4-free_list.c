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
    list_t *tempNode;

    while (head)
    {
        tempNode = head->next;
        free(head->str);
        free(head);
        head = tempNode;
    }
    
}
