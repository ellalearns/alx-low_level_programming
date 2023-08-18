#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - free d-linked list
 * @head: pointer to node of list to be freed
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *currentNode;
    while (head->prev != NULL)
    {
        head = head->prev;
    }
    while(head != NULL)
    {
        currentNode = head;
        head = head->next;
        free(currentNode);
    }
}
