#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::string;

int main()
{
    vector<string> text;
    string line;

    while(getline(cin, line))
        text.push_back(line);

    for(auto &word: text)
    {
        for(auto &ch: word)
            if(isalpha(ch))
                ch = toupper(ch);
        cout << word << " ";
    }

    return 0;
}