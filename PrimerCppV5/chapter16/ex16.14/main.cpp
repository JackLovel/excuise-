#include <iostream>
#include <vector>

#include "screen.h"

int main()
{
    Screen<1, 5> scr('c');
    Screen<2, 4> scr2;

    std::cout << scr;
    std::cin >> scr2;

    std::cout << scr2;
}
