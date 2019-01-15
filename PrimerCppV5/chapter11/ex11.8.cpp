#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
using Families = map<string, vector<string>>;

int main()
{
    vector<string> exclude = {"aa", "bb", "cc", "dd", "ee", "ff"};

    for(string word; cout << "Enter plz:\n", cin >> word;)
    {
        auto is_excluded = binary_search(exclude.cbegin(), exclude.cend(), word);
        auto reply = is_excluded ? "exclude": "no exclude";

        cout << reply << endl;
    }

    return 0;
}