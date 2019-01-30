#include "binary_search.h"

int main()
{
    int a[] = {0, 1, 16, 24, 35, 47, 59, 62, 73, 88, 89};

    // int *p1 = binary_search_pointer(a, a + 11, 62);
    // std::cout << *p1 << std::endl;
    //
    // int *p2 = binary_search_pointer(a, a + 11, 100);
    // std::cout << *p2 << std::endl;

    int p3 = binary_search_array(a, 11, 73);
    std::cout << a[p3] << std::endl;

    int p4 = binary_search_array(a, 11, 100);
    std::cout << a[p4] << std::endl;

    return 0;
}
