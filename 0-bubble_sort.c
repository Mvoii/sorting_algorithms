#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
    int tmp;
    size_t i, j;
    int swapped;

    if (array == NULL || size < 2)
        return;

    /* pass through the array */
    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* swap */
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;

                swapped = 1;

                /* print after each swap */
                print_array(array, size);
            }
        }
        if (swapped == 0)
            return;
    }
}