#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: the intended size of the table
 * Return: a new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
    {
        return (NULL);
    }

    hash_table->size = size;
    hash_table->array = calloc(hash_table->size, sizeof(hash_node_t));
    if (hash_table->array == NULL)
    {
        return (NULL);
    }
    for (unsigned long int i = 0; i < hash_table->size; i++)
    {
        hash_table->array[i] = NULL;
    }

    return (hash_table);

}
