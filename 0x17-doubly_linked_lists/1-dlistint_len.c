#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - returns no of elements in a doubly linked list
 * @h: link to head of d-linked list
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t numberOfNodes = 0;
dlistint_t currentNode;

currentNode = h;

while (currentNode != NULL)
{
numberOfNodes++;
currentNode = currentNode -> next;
}

return (numberOfNodes);
}
