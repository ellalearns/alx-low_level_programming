#include "hash_tables.h"

/**
 * key_index - uses the djb2 algo to get index of a key
 * @key: the key
 * @size: the table's size
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
index = hash_djb2(key) % size;
return (index);
}
