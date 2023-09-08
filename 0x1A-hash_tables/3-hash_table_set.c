#include "hash_tables.h"

/**
 * replace_value - replaces the value at a pre-existing key in a linked list.
 * @ht: Pointer to the hash_node_t list.
 * @key: New key to add in the node.
 * @value: Value to add in the node.
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
hash_node_t *temp = *ht;

while (temp && strcmp(temp->key, key))
temp = temp->next;

if (temp)
{
free(temp->value);
temp->value = strdup(value);
}
}

/**
 * check_key - checks if a key exists in a hash table.
 * @ht: Pointer to the hash_node_t list.
 * @key: Key to look for.
 *
 * Return: 1 if the key is found, 0 otherwise.
 */
int check_key(hash_node_t *ht, const char *key)
{
while (ht)
{
if (!strcmp(ht->key, key))
return 1;
ht = ht->next;
}
return 0;
}

/**
 * add_node - adds a new node at the beginning of a linked list.
 * @head: Double pointer to the hash_node_t list.
 * @key: New key to add in the node.
 * @value: Value to add in the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
hash_node_t *new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return NULL;

new_node->key = strdup(key);
new_node->value = strdup(value);

if (!new_node->key || !new_node->value)
{
free(new_node->key);    /* Clean up if one of the strdup calls fails. */
free(new_node->value);
free(new_node);
return NULL;
}

new_node->next = *head;
*head = new_node;

return new_node;
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Hash table to add the element to.
 * @key: Key of the element, will give the index in the array.
 * @value: Value of the element to store in the array.
 *
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;

if (!ht || !key || !value || strcmp(key, "") == 0)
return 0;

index = key_index((unsigned char *)key, ht->size);

if (check_key(ht->array[index], key))
{
replace_value(&ht->array[index], key, value);
}
else
{
if (!add_node(&ht->array[index], key, value))
return 0;
}

return 1;
}
