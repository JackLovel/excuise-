#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string>  v;
    for(string buffer; cin >> buffer; v.push_back(buffer))
        cout << v.capacity() << endl;
    
    return 0;
}
