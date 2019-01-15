#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::cin;

int main()
{
	vector<string> scores = { "F", "D", "C", "B", "A", "A++" };

	int grade = 0;

	while (cin >> grade) {
		string letter = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
		letter += (grade == 100 || grade < 60)? "":(grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" :"";
		cout << letter << endl;
	}

	system("pause");
	return 0;
}