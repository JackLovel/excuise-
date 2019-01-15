#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::string;
using std::cout;
using std::vector;
using std::unique;
using std::endl;

inline std::ostream& println(vector<string> &seq)
{
    for(auto const& elem : seq) std::cout << elem << " ";
    std::cout << std::endl;

    return std::cout;
}

inline bool
isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

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
    stable_sort(word.begin(), word.end(), isShorter);
    println(word);

    return 0;
}