#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
    vector<int> v1;
    cout << "v1_size: " << v1.size() << endl;
    cout << endl;

    vector<int> v2(10);
    cout << "v2_size: " << v2.size() << endl;
    for(auto i : v2) cout << i << " ";
    cout << endl;cout<<endl;

    vector<int> v3(10, 42);
    cout << "v3_size: " << v3.size() << endl;
    for(auto i : v3) cout << i << " ";
    cout << endl;cout << endl;

    vector<int> v4{10};
    cout << "v4_size: " << v4.size() << endl;
    for(auto i : v4) cout << i << " ";
    cout << endl;cout << endl;

    vector<int> v5{10, 42};
    cout << "v5_size: " << v5.size() << endl;
    for(auto i : v5) cout << i << " ";
    cout << endl;cout << endl;

    vector<int> v6{10};
    cout << "v6_size: " << v6.size() << endl;
    for(auto i : v6) cout << i << " ";
    cout << endl;cout << endl;

    vector<string> v7{10, "hi"};
    cout << "v7_size: " << v7.size() << endl;
    for(auto i : v7) cout << i << " ";
    cout << endl;cout << endl;

    return 0;
}