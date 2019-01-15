#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // data.txt is a ANSI File
    ifstream ifs(R"(C:\code_pro\QtCode\QtProject\iterTest\data.txt)");
    istream_iterator<string> in(ifs);
    istream_iterator<string> eof;  // 尾后迭代器

    vector<string> svec;
    copy(in, eof, back_inserter(svec)); // 拷贝到vector中

    copy(svec.cbegin(), svec.cend(), ostream_iterator<string>(cout, "\n"));

    return 0;
}