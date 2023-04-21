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

    tempNode = malloc(sizeof(list_t));

    if (tempNode == NULL)
    {
        return (NULL);
    }

    tempNode->next = *head;
    tempNode->str = stdrup(str);
    tempNode->len = strlen(str);

    *head = tempNode;

    return (*head);
}
