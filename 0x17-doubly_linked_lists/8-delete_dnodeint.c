#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *currentNode;
    dlistint_t *prevNode;
    unsigned int counter;
    unsigned int counter2;
    counter = 0;
    counter2 = 0;
    currentNode = *head;
    prevNode = *head;
    while (currentNode->prev != NULL)
    {
        currentNode = currentNode->prev;
        prevNode = prevNode->prev;
    }
    while (counter < index)
    {
        if (currentNode -> next == NULL)
        {
            return (-1);
        }
        currentNode = currentNode -> next;
    }
    while (counter2 < (index - 1))
    {
        if (prevNode ->next == NULL)
        {
            return (-1);
        }
        prevNode = prevNode -> next;
    }
    prevNode->next = currentNode->next;
    currentNode->prev = NULL;
    currentNode->next = NULL;
    return (1);
}
