#include <iostream>
#include <string>
#include <deque>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::deque;

int main()
{
	deque<string> deq;
	string word;
	while (cin >> word)
		deq.push_back(word);

	for (auto i : deq)
		cout << i << endl;

	return 0;
}