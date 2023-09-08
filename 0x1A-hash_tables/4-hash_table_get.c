#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key of the value to retrieve.
 *
 * Return: The value associated with the element, or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node = NULL;

if (!ht || !key || key[0] == '\0')
return NULL;

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

while (node)
{
if (strcmp(node->key, key) == 0)
return node->value;
node = node->next;
}

return NULL;
}
