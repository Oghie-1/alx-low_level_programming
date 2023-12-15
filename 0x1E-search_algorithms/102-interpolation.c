#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t pos, low, high;
    double f;

    if (array == NULL || size == 0)
        return -1;

    low = 0;
    high = size - 1;

    while (low <= high && array[high] != array[low])
    {
        f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
        pos = low + (size_t)f;

        /* Check if pos is within the valid range */
        if (pos < size)
        {
            printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

            if (array[pos] == value)
                return (int)pos;

            if (array[pos] < value)
                low = pos + 1;
            else
                high = pos - 1;
        }
        else
        {
            printf("Value checked array[%lu] is out of range\n", pos);
            break;
        }
    }

    return -1; /* Not found */
}

