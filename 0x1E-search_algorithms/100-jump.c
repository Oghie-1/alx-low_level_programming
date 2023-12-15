#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    int block_size;
    int step;
    int prev;
    int index;
    if (array == NULL || size == 0)
        return -1;

    /* Calculate the block size to jump */
    block_size = (int)sqrt((double)size);
    step = 0;
    prev = 0;
    index = 0;

    /* Perform the jump search */
    while (index < (int)size && array[index] < value)
    {
        printf("Value checked array[%d] = [%d]\n", index, array[index]);

        if (array[index] == value)
            return index;

        prev = index;
        step++;
        index = step * block_size;
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, index);

    /* Perform linear search within the block */
    for (; prev <= index && prev < (int)size; prev++)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

        if (array[prev] == value)
            return prev;
    }

    return -1; /* Not found */
}
