// 比较两数大小使用递归

#include <iostream>

using std::cout;
using std::cin;

void printResult(int lo, int hi)
{
   if(lo > hi)
   {
       printResult(hi, lo);
       return;
   }
   for(int i = lo; i != hi; ++i)
       cout << i << " ";
}

int main()
{
    int low = 0, high = 0;
    cout << "Enter two numbers: ";
    cin >> low >> high;
    printResult(low, high);
    return 0;
}
