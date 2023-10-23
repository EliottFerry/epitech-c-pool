#include "day04.h"

void swap_array_elem(int *array, int i, int y)
{
    if (array[i] > array[y])
        my_swap(&array[i], &array[y]);
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
        for (int y = i; y < size; y++)
            swap_array_elem(array, i, y);
}