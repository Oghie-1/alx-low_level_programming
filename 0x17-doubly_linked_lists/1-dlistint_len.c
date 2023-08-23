#include "lists.h"


size_t dlistint_len(const dlistint_t * h) {
size_t count = 0;
/* Initialize a counter to keep track of the number of nodes */

/* Traverse the linked list and count the elements */
while (h != NULL) {
count++;
/* Increment the counter */
h = h -> next;
/* Move to the next node */
}

return count;
/* Return the total number of elements */
}
