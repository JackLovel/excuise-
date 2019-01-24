#ifndef SEQUENCE_SEARCH_H
#define SEQUENCE_SEARCH_H

#include <iostream>
#include <string>

template<typename Iter, typename T>
Iter normal_search(Iter first, Iter end, const T& key)
{
    while (first != end)
    {
        if (*first == key)
        {
            return first;
        }

        ++first;
	}
}
#endif // SEQUENCE_SEARCH_H
