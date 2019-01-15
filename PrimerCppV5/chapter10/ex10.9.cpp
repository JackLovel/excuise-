#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::string;
using std::cout;
using std::vector;
using std::unique;
using std::endl;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main()
{
    vector<string> word{"fox", "quick", "red", "fox", "jumps", "over",
                       "the", "slow", "red", "turtle"};

    elimDups(word);
    for(auto w:word) cout << w << " ";
    cout << endl;
    return 0;
}