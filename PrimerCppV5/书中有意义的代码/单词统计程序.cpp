// C++ primer page 375 and page 382
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // 统计每个单词在输入中出现的次数
    map<string, size_t> word_count;
    string word;
    // 当输入 "@q" 时，打印结果！
    while (cin >> word && word != "@q") {
       ++word_count[word];
    }

    auto map_it = word_count.cbegin();
    while(map_it != word_count.cend()){
        cout << map_it->first << " occurs "
             << map_it->second << " times" << endl;
        ++map_it;
    }

    return 0;
}