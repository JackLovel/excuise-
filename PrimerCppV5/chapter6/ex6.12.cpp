// 引用
#include <iostream>

void swap(int &item1, int &item2)
{
    int temp = 0;
    temp = item1;
    item1 = item2;
    item2 = temp;
}

int main(void)
{
    int item1 = 3, item2 = 4;
    std::cout << "Please Enter:\n";
    std::cin >> item1 >> item2;


    swap(item1, item2);
    std::cout << item1 << " " << item2;

    return 0;
}