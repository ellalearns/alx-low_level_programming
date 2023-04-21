#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function
 * @head: arg
 * @str: arg
 * Return: pointer to new node, abi new node itself
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newNode;
    unsigned int len;
    list_t *tempNode = *head;

    newNode = malloc(sizeof(list_t));

    if (newNode == NULL)
    {
        return (NULL);
    }

    len = 0;
    while (str[len])
    {
        len++;
    }

    newNode->len = len;
    newNode->str = strdup(str);
    newNode->next = NULL;
    
    if (*head == NULL)
    {
        *head = newNode;
        return (newNode);
    }

    while (tempNode->next)
    {
        tempNode = tempNode->next;
    }

    tempNode->next = newNode;

    return (newNode);
    

}


