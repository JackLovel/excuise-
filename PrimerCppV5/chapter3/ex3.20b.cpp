#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    int value;
    vector<int> vec;

    while(cin >> value)
    {
        vec.push_back(value);
    }

    if(vec.empty())
    {
        cout << "input at least one integer." << endl;
        return -1;
    }
    
    auto size = ((vec.size() + 1) / 2);
    
    for(int i = 0; i <size; ++i)
       cout << vec[size + i] * vec[size - 1 - i] << " "; 
    cout << endl;

    return 0;
}