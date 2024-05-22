#include "search_algos.h"

/**
 * linear_search - search a list linearly
 * @array: pointer to the first element of list
 * @size: size of the list
 * @value: the value to search for
 * Return: first index where value is found or -1 if fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;

	if (array == NULL)
		return (-1);

	while (counter < size)
	{
		printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
			return (counter);
		counter++;
	}

	return (-1);
}
