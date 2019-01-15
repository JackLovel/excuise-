## 练习 5.1
>什么是空语句？什么时候用到空语句？
```
(1)空语句是只含有一个单独的分号的语句。
(2)如果在程序的某个地方，语法上需要一条语句但是逻辑上不需要，此时应该使用空语句。
```
 
## 练习 5.2
>什么是块？什么时候用到块？
```
(1)是指用花括括起来的（可能为空的）语句和声明的序列
(2)如果在程序的某个地方，语法上需要一条语句但是逻辑上需要多条语句，则需要使用到块（也叫做复合语句）
```

## 练习 5.3
>使用逗号运算符(参见4.10节，第140页) 重写1.4.1节(第10页)的while循环，使它不再需要块，观察改写之后的代码的可读性提高了还是降低了。
```cpp
#include "stdafx.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int sum = 0, val = 1;

	while (val <= 10)
		sum += val, ++val;

	cout << "Sum of 1 to 10 inclusive is "
		<< sum << endl;

	system("pause");
	return 0;
}
```
改写之后的代码的可读性降低了。

## 练习 5.4

```cpp
// 第一个非法的声明: 式子中的iter没有写声明表达式
正确的写法：
	string s("Test string");
	string::iterator it = s.begin(); // 就该添加这一行

	while (it != s.end()) {
		cout << *it << endl;
		++it;
	}
	cout << endl;


```

## 练习 5.7
```
// 第一个语句后应该添加一个分号
(a) if(ival1 != ival2)  ival1 = ival2;
	else ival1 = ival2 = 0;


// 多条语句应该添加一个花括号
(b) if(ival < minval){
	minvial = ival;
	occurs = 1;
}

// 第二语句应该使用 else if 
if(int ival = get_value())
	cout << "ival = " << ival << endl;
else if(!ival)
	cout << "ival = 0\n";

// 逻辑判断应该使用 “==”
if(ival == 0)
	ival = get_value();
```

## 练习 5.9
```
什么是悬垂else？
当一个if语句嵌套在另一个if语句内部时，很可能if分支会多于else分支。

C++语句是如何处理处理else子句的？
它规定else与离它最近的尚未匹配的if匹配

```

## 练习 5.13
```
(a) // 每个 case结尾都应该有个break语句。
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a': aCnt++; break;
        case 'e': eCnt++; break;
        default : iouCnt++; break;
    }
(b) // ix常量的作用域位于 case 1
    unsigned index = some_value();
    switch (index) {
        case 1:
            int ix;
            ivec[ ix ] = index;
            break;
        default:
            ix = static_cast<int>(ivec.size())-1;
            ivec[ ix ] = index;
    }
(c) // 每个case只能对应一个值，不能对应多个值
    unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
        case 1: case 3: case 5: case 7: case 9:
            oddcnt++; // oddcnt != oddCnt
            break;
        case 2: case 4: case 6: case 8: case 0:
            evencnt++; // evencnt != evenCnt
            break;
    }
(d) // case对应的值必需是一个整型常表达式(或者是一个 整形常量)
    const unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }
```

# 练习 5.15

```
(a) 应该将变量ix定义为全局变量，否则if部分将无法使用
for(int ix = 0; ix!=sz; ++ix){/*...*/}
if(ix != sz)

(b)for循环缺一不可，除非用分号代替
int ix;
for(; ix != sz; ++ix){/*...*/}
(c)for中只能 定义多个变量 ，不能多个修改变量的表达式
for(int ix=0; ix != sz; ++ix){/*...*/}
```

# 练习 5.18
```
(a) do { // added bracket.
        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    }while (cin);
(b) int ival;
    do {
        // . . .
    } while (ival = get_response()); // should not declared in this scope.
(c) int ival = get_response();
    do {
        ival = get_response();
    } while (ival); // ival is not declared in this scope.
```









































