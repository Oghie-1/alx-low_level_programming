#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
dlistint_t *new_node;
dlistint_t *current;
unsigned int count = 0;
if (h == NULL) {
return NULL;
/* Return NULL if the pointer to the head is NULL */
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL) {
return NULL;
/* Return NULL if memory allocation fails */
}

new_node->n = n;
/* Initialize the new node */
new_node->prev = NULL;
new_node->next = NULL;

if (idx == 0) {
new_node->next = *h;
if (*h != NULL) {
(*h)->prev = new_node;
}
*h = new_node;
return new_node;
}
current = *h;

while (current != NULL && count < idx - 1) {
current = current->next;
count++;
}

if (current == NULL) {
free(new_node);
/* Free the new ndoe if index is out of range */
return NULL;
}

new_node->next = current->next;
new_node->prev = current;

if (current->next != NULL) {
current->next->prev = new_node;
}

current->next = new_node;

return new_node;
}
