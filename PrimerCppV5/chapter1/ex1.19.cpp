#include <iostream>

int main()
{
    int small = 0, big = 0;
    std::cout << "Please input two integers: ";
    std::cin >> small << big;

    if(small > big)
    {
        int tmp = small;
        small = big;
        big = small;
    }

    while (small <= big) {
       std::cout << small
                 << " ";
       ++small;
    }

    std::cout << std::endl;

    return 0;
}