#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string word;
    vector<string> words;
    
    while(cin >> word)
        words.push_back(word);

    for(auto &w : words)
        for(auto &c : w)
            w = toupper(w);
    
    for(string::size_type i = 0; i!=words.size(); ++i)
    {
        cout << words[i] << endl;
    }
    cout << endl;
        
    return 0;
}