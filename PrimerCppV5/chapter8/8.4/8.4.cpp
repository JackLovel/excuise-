#include "pch.h"

int main()
{
	// string path{R"(C:\Users\15606\source\repos\function\流\data.txt)"};
	vector<string> vec;
	ReadFileToVec("data.txt", vec);  // data.txt 与 流.cpp 位于同一个文件夹中

	for (const auto &str : vec)
		cout << str << endl;

	system("pause");
	return 0;
}

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
	ifstream ifs(fileName);
	if (ifs)  // 如果 ifs 流有效
	{
		string buf;
		while (getline(ifs, buf)) 
		{
			vec.push_back(buf);  // push_back() 将字符串写入 vec中
		}
	}
}