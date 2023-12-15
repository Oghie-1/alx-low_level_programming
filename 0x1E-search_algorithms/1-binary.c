#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in an array using binary search
 *
 * @array: input array
 * @low: lower index bound
 * @high: upper index bound
 * @value: value to search for
 * Return: index of the number or -1 if not found
 */
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{   
    size_t middle;
    size_t i;
    if (array == NULL || low > high)
        return -1;

    middle = low + (high - low) / 2;
    printf("Searching in array: ");


    for (i = low; i <= high; i++)
        printf("%s%d", (i == low) ? "" : ", ", array[i]);
    printf("\n");

    if (array[middle] == value)
        return (int)middle;
    else if (array[middle] > value)
        return binary_search_recursive(array, low, middle - 1, value);
    else
        return binary_search_recursive(array, middle + 1, high, value);
}

/**
 * binary_search - searches for a value in a sorted array using binary search
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    return binary_search_recursive(array, 0, size - 1, value);
}

