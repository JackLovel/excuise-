// 使用noskipws来接受空白字符
#include <iostream>

using std::cout; 
using std::endl; 
using std::cin;
using std::noskipws;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, lineBreakCnt = 0;
	char ch;

	while (cin >>noskipws>> ch)
	{
		// 如果ch是元音字母，将其对就的计数值加1
		// ch 的值转换成整数类型，然后与每个case标签的值比较
		switch (ch){
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++aCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++lineBreakCnt;
				break;
		}
	}

	// 输出结果
	cout << "Number of vowel a: \t" << aCnt << '\n'
		 << "Number of vowel e: \t" << eCnt << '\n'
		 << "Number of vowel i: \t" << iCnt << '\n'
		 << "Number of vowel o: \t" << oCnt << '\n'
		 << "Number of vowel u: \t" << uCnt << '\n'
	     << "Number of space : \t" << spaceCnt << '\n'
		 << "Number of tab char o: \t" << tabCnt << '\n'
		 << "Number of new line u: \t" << lineBreakCnt<< '\n';

	return 0;
}
