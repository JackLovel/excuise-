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
    
    if(vec.size() == 1)
    {
        cout << "only one integer " << vec[0] << ", need more elements." << endl;
        return -1;
    }
    
    for(decltype(vec.size()) i = 0; i < vec.size() - 1; ++i)
       cout << vec[i] + vec[i+1] << " "; 
    cout << endl;

    return 0;
}