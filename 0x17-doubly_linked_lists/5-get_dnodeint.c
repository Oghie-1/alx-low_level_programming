#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
unsigned int count = 0;
dlistint_t *current = head;

while (current != NULL) {
if (count == index) {
return current; /* Return the node at the specified index */
}
current = current->next;
count++;
}
return NULL; /* Return NULL if the node does not exist at the specified index */
}

