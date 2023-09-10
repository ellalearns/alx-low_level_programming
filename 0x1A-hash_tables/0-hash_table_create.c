#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: the size of the hash table
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t* new_table;
    unsigned long int currentNode = 0;

    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
    {
        return (NULL);
    }

    new_table->size = size;
    new_table->array = calloc(new_table->size, sizeof(hash_node_t));
    if (new_table->array == NULL)
    {
        return (NULL);
    }

    while (currentNode < new_table->size)
    {
        new_table->array[currentNode] = NULL;
        currentNode++;
    }

    return (new_table);
}
