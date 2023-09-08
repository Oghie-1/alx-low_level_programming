#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table.
 * @key: The key to find the index of.
 * @size: Size of the array of indexes.
 *
 * Return: The index at which the key/value pair should be stored
 * in the array of the hash table, or 0 if size is 0.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;

if (size == 0)
return (0);

hash = hash_djb2(key);

return (hash % size);
}
