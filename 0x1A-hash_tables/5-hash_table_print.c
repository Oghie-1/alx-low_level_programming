#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
int first_entry;
unsigned long int i;
if (!ht)
return;

first_entry = 1;  /* Flag to track the first entry */
printf("{");

for (i = 0; i < ht->size; i++)
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
