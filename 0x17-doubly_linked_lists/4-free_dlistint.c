# include "lists.h"

void free_dlistint(dlistint_t *head) {
dlistint_t *current = head;
while (current != NULL) {
dlistint_t *temp = current;
/* Store the current node in a temporary variable */
current = current->next;
/* Move to the next node */
free(temp);
/* Free the memory of the current node */
}
}

