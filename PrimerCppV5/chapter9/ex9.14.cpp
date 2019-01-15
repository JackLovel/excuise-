#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::list<const char*> cli{"string", "char"};
    std::vector<std::string> svec;
    svec.assign(cli.begin(), cli.end());

    for(auto v : svec)
        std::cout << v << " ";
    std::cout << std::endl;

    return 0;
}
