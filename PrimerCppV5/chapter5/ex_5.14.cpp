#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string; using std::pair;

int main()
{ 
	// 创建一个关于字符串和该字符串的当前个数的键值对
    pair<string, int> max_duplicated;
    int count = 0;

	// str为当前字符串，prestr为该字符串前一个字符串
	string str, prestr;

    for (cin >> str)
    {
        if (str == prestr) 
			++count;
        else 
			count = 0; 

		// 如果个数大于当前字符的个数，就重新写入。
        if (count > max_duplicated.second){
			max_duplicated = { prestr, count };
		}

		// 将当前的字符保存下来，并赋给一个下一个字符串的前面一个字符串变量中。
		prestr = str
    }
    
	// 如果不存在，输出一条信息说明任何单词都没有连续出现过
    if (max_duplicated.first.empty()) cout << "There's no duplicated string." << endl;
    else cout << "the word " << max_duplicated.first << " occurred " << max_duplicated.second + 1 << " times. " << endl;
    
    return 0;
}