#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
    ssize_t *cur, *prev, *next;

    // check if is NULL
    if (list == NULL || *list == NULL)
        return;

    // assign cur to head
    cur = *list;
    //traversing a dll
    //seection sort
    //swap nodes but first swap using arrays
}

void insert_sort(int *array, size_t size)
{
    size_t i, j;
    int key;

    for (i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;

        while (j && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
        print_array(array, size);
    }
}

int main(void)
{
    int array[] = {1, 3, 2, 4, 6, 5};
    size_t size = sizeof(array) / sizeof(array[0]);

    print_array(array, size);
    insert_sort(array, size);
    return (0);
}