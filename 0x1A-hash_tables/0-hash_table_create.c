#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t* new_table;
    int currentNode = 0;

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

    for (currentNode; new_table->array[currentNode]; currentNode++)
    {
        new_table->array[currentNode] = NULL;
    }

    return (new_table);
}
