#ifndef INSERT_SORT_H
#define INSERT_SORT_H

#include <iostream>

template<typename T>
void insert_sort(T* array, int size)
{
    for (int i = 1; i < size; ++i)
    {
        if (array[i] < array[i - 1])
        {
            T temp = array[i];
            int j = i;

            while(temp < array[j - 1] && j > 0)
            {
                array[j] = array[j - 1];
                --j;
            }
            array[j] = temp;
        }
    }
}

#endif // INSERT_SORT_H

