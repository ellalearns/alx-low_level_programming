#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print a doubly linked list
 * @h: pointer to the head of list
 * Return: no of nodes in size_t format
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;
const dlistint_t *now;

now = h;

while (now != NULL)
{
printf("%d\n", now -> n);
nodes++;
now = now -> next;
}
return (nodes);
}
