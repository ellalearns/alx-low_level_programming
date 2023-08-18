#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - add node to beg of d-linked list
 * @head: the list
 * @n: int to be in new node
 * Return: new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode;
    dlistint_t *currentNode;
    currentNode = *head;
    newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
    {
        return (NULL);
    }
    newNode->n = n;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        while (currentNode->prev != NULL)
        {
            currentNode = currentNode -> prev;
        }
        currentNode -> prev = newNode;
        newNode -> next = currentNode;
    }
    return (newNode);
}
