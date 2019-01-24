#ifndef BINARY_SEARCH_CPP
#define BINARY_SEARCH_CPP

#include <iostream>

template<typename Iter, typename T>
Iter binary_search_pointer(Iter first, Iter last, const T& key)
{
    int low = 0;
    int high = last - first - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key < *(first + mid))
        {
            high = mid - 1;
        }
        else if (key > *(first + mid))
        {
            low = mid + 1;
        }
        else
        {
            return first + mid;
        }
    }
    std::cout << "not found" << std::endl;
}

template<typename Iter, typename T>
int binary_search_array(Iter dest, int n, const T& key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key < dest[mid])
        {
            high = mid - 1;
        }
        else if (key > dest[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    std::cout << "not found" << std::endl;
}

#endif // BINARY_SEARCH_CPP
