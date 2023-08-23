#include "lists.h"


dlistint_t *add_dnodeint(dlistint_t **head, const int n){
dlistint_t *new_node = malloc(sizeof(dlistint_t));
/* Allocate memory for the new node */
if (new_node == NULL) {
return NULL;
/* Return NULL if memory allocation fails */
}

/* Initialize the new node */
new_node->n = n;
new_node->prev = NULL;
/* New node's next points to the current head */

if (*head != NULL) {
(*head)->prev = new_node;
new_node->next = *head;
/* Update previous of current head if it exists */
} else {
new_node->next = NULL;
}

*head = new_node;
/* Update the head to point to the new node */

return new_node;
/* Return the address of the new element */
}
