#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - get nth node given a 0-based index
 * @head: pointer to first node
 * @index: 0-based index
 * @Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int currentPosition;
    dlistint_t *currentNode;

    currentPosition = 0;
    currentNode = head;

    if (*head == NULL)
    {
        return (NULL);
    }

    while (currentNode != NULL)
    {
        currentNode = currentNode->prev;
    }

    while (currentPosition < index)
    {
        currentNode = currentNode -> next;
    }

    return (currentNode);
}
