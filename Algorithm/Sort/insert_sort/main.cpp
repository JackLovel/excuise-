#include "insert_sort.h"

int main()
{
    int a[] = {3, 50, 1, 6, 7, 5, 30, 9, 8};
    insert_sort(a, 9);

    for(int i = 0; i < 9; ++i)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    return 0;
}

