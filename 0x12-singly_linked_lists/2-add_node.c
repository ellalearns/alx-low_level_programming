#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @head: the first element of a singly linked list
 * @str: the str to be copied into the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;
	unsigned int str_len;
	unsigned int counter;
	unsigned int second_counter;
	char *new_str;

	counter = 0;
	second_counter = 0;

	while (str[counter] != NULL)
	{
		counter++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = malloc(sizeof(char) * (counter + 1));

	while (second_counter <= counter)
	{
		new_node->str[second_counter] = str[counter];
		second_counter++;
	}

	new_node->len = second_counter;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
