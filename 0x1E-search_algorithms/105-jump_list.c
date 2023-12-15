#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted singly linked list
 *             using the Jump search algorithm.
 *
 * @list: input list
 * @size: size of the list
 * @value: value to search for
 * Return: node containing the value or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump_size, index;
    jump_size = sqrt(size);
    index = 0;
    listint_t *prev = NULL;

    if (list == NULL || size == 0)
        return NULL;

    while (list->next && list->n < value)
    {
        prev = list;
        index += jump_size;

        while (list->next && list->index < index)
            list = list->next;

        if (list->next == NULL && index != list->index)
            index = list->index;

        printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
    }

    printf("Value found between indexes [%d] and [%d]\n",
           prev ? (int)prev->index : 0, (int)list->index);

    while (prev && prev->index <= list->index)
    {
        printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
        if (prev->n == value)
            return prev;

        prev = prev->next;
    }

    return NULL;
}
