#include <iostream>

int main()
{
    int sum = 0, n = 50;
    while(n < 101)
    {
        sum = sum + n;
        n++;
    }

    std::cout << "sum: " << sum << std::endl;

    return 0;
}

