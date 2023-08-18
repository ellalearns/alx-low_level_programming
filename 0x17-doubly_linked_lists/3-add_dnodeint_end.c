#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to list end
 * @head: list
 * @n: int value
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *currentNode;
    dlistint_t *newNode;

    currentNode = malloc(sizeof(dlistint_t));
    if (currentNode == NULL)
    {
        return (NULL);
    }

    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->n = n;

    currentNode = *head;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
    }
    currentNode->next = newNode;
    newNode->prev = currentNode;

    return (newNode);
}
