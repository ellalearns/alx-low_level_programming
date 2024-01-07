#include "lists.h"

/**
 * list_len - return the number of elements in a singly linked list
 * @h: the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number_of_elements;

	number_of_elements = 0;

	while (h)
	{
		number_of_elements++;
		h = h->next;
	}

	return (number_of_elements);
}
