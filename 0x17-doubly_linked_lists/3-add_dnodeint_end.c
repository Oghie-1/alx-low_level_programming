#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t ** head, const int n) {
/* Allocate memory for the new node */
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *current = *head;
if (new_node == NULL) {
return NULL;
/* Return NULL if memory allocation fails */
}

/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;
/* New node's next points to NULL */

if (*head == NULL) {
new_node->prev = NULL;
/* If list is empty, previous is NULL */
*head = new_node;
/* Update head to point to the new node */
return new_node;
/* Return the address of the new element */
}
while (current->next != NULL) {
current = current->next;
/* Traverse to the last node */
}

current->next = new_node;
/* Attach the new node at the end */
new_node->prev = current;
/* Set previous of the new node */

return new_node;
/* Return the address of the new element */
}
