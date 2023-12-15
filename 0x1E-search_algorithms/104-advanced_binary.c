#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in an array using
 * the Binary search algorithm with recursion.
 *
 * @array: input array
 * @left: left index of the current subarray
 * @right: right index of the current subarray
 * @value: value to search
 * Return: index of the number or -1 if not found
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;
    size_t i;
    if (left <= right)
    {
        mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[right]);

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            return binary_search_recursive(array, mid + 1, right, value);

        return binary_search_recursive(array, left, mid - 1, value);
    }

    return -1;
}

/**
 * advanced_binary - calls binary_search_recursive to return
 * the index of the number.
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: index of the number or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    return binary_search_recursive(array, 0, size - 1, value);
}
