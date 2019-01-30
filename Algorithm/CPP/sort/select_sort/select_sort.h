#ifndef SELECT_SORT_H
#define SELECT_SORT_H

#include <iostream>

template<typename T>
void select_sort(T* array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        int min = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            T temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

}

#endif // SELECT_SORT_H

