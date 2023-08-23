#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
unsigned int count = 0;
dlistint_t *current = *head;
if (*head == NULL) {
return -1; /* List is empty, deletion failed */
}

if (index == 0) {
*head = current->next;
if (*head != NULL) {
(*head)->prev = NULL;
}
free(current);
return 1; /* Deletion succeeded */
}

while (current != NULL) {
if (count == index) {
if (current->next != NULL) {
current->next->prev = current->prev;
}
if (current->prev != NULL) {
current->prev->next = current->next;
}
free(current);
return 1; /* Deletion succeeded */
}
current = current->next;
count++;
}
return -1; /* Index out of range, deletion failed */
}
