#include "search_algos.h"


/**
 * linear_search - searches for a value in an array using Linear search
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    if (array == NULL)
        return -1;
    

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (value == array[i])
            return i;
    }

    return -1; /* Not found */
}
