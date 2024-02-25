#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: the intended size of the table
 * Return: a new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    unsigned long int counter;

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
    {
        return (NULL);
    }

    hash_table->size = size;
    hash_table->array = malloc(sizeof(hash_node_t) * size);
    if (hash_table->array == NULL)
    {
        return (NULL);
    }
    while (counter < hash_table->size)
    {
        hash_table->array[counter] = NULL;
        counter++;
    }

    return (hash_table);

}
