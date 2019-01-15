#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v2;
    std::string value;
    while(std::cin >> value)
        v2.push_back(value);

    return 0;
}