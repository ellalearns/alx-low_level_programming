#include "hash_tables.h"

/**
 * hash_djb2 - an implementation of the hash djb2 algorithm
 * @str: the string to find a hash for
 * Return: hash value / hash index
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash)+c;
}
return (hash);
}
