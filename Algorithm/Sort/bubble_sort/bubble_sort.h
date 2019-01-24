#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <iostream>

template<typename T>
void bubble_sort(T* array, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
#endif // BUBBLE_SORT_H
