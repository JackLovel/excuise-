#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using std::vector;
using std::count_if;
using std::string;


// Exercise 10.20
std::size_t bigerThan6(vector<string> const& v)
{
    return count_if(v.cbegin(), v.cend(), [](string const& s){
        return s.size() > 6;
    });
}


int main()
{
    // ex10.20
    vector<string> v{
        "alan","moophy","1234567","1234567","1234567","1234567"
    };
    std::cout << "ex10.20: " << bigerThan6(v) << std::endl;

    // ex10.21
    int i = 7;
    auto check_and_decrement = [&i]() { return i > 0 ? !--i : !i; };
    std::cout << "ex10.21: ";
    while(!check_and_decrement())
        std::cout << i << " ";
    std::cout << i << std::endl;

    return 0;
}
