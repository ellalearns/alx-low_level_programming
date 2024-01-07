#include "lists.h"

/**
 * print_list - function to print the elements of a singly linked list
 * @h: the singly linked list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			number_of_nodes++;
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}

	return (number_of_nodes);
}
