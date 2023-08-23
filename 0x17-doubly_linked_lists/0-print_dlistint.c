#include "lists.h"

size_t print_dlistint(const dlistint_t *h) {
size_t count = 0;  /* Initialize a counter to keep track of the number of nodes */

/* Traverse the doubly linked list and print the elements */
while (h != NULL) {
printf("%d\n", h->n);  /* Assuming 'n' is the data element of the dlistint_t structure */
h = h->next;  /* Move to the next node */
count++;  /* Increment the counter */
}

return count;  /* Return the total number of nodes */
}


