#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <iostream>

template<typename T>
int partition(T* array, int low, int high)
{
    T compare_base = array[low];
    while (low < high)
    {
        if (array[low] == compare_base)
        {
            if (array[low] < array[high])
            {
               --high;
            }
            else
            {
                array[low] = array[high];
                array[high] = compare_base;
                ++low;
            }

        }
        else
        {
            if (array[low] < array[high])
            {
                ++low;
            }
            else
            {
               array[high] = array[low];
               array[low] = compare_base;
               --high;
            }
        }
    }

    return low;
}

template<typename T>
void do_quick_sort(T* array, int first, int last)
{
    if (last > first)
    {
        int mid = partition(array, first, last);
        do_quick_sort(array, first, mid - 1);
        do_quick_sort(array, mid + 1, last);
    }
}

template<typename T>
void quick_sort(T* array, int size)
{
    do_quick_sort(array, 0, size - 1);
}

#endif // QUICK_SORT_H
