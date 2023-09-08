#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
if (!ht)
return;

int first_entry = 1;  /* Flag to track the first entry */
printf("{");

for (unsigned long int i = 0; i < ht->size; i++)
{
hash_node_t *node = ht->array[i];
        
while (node)
{
if (!first_entry)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
first_entry = 0;

node = node->next;
}
}

printf("}\n");
}
