#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function
 * @head: argument
 * @str: argument
 * Return: list_t
*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *tempNode;
    unsigned int len;

    tempNode = malloc(sizeof(list_t));

    if (tempNode == NULL)
    {
        return (NULL);
    }

    len = 0;

    while (str[len])
    {
        len++;
    }

    tempNode->next = *head;
    tempNode->str = stdrup(str);
    tempNode->len = len;

    *head = tempNode;

    return (*head);
}
