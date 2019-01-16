## 练习3.1
[part1](ex3.1a.cpp) | [part2](ex3.1b.cpp)

## 练习3.2
[part1](ex3.2a.cpp) | [part2](ex3.2b.cpp)

## 练习3.3 
> 请说明string类的输入运算符和getline函数分别是如何处理空白字符的。
```
前者：会自动忽略开头的空白(即空格符、换行符、制表符), 并从第一个真正的字符开始读起，直到遇到下一处空白为止
后者：保留输入时的空白符，直到遇到换行符为止。
```

## 练习3.4
> 编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串。改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。   

[part1](ex3.4a.cpp) | [part2](ex3.4b.cpp)      

## 练习3.5
> 编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出边接成大字符串。然后修改上述程序，用空格把输入的多个字符串分隔开来。   

[part1](ex3.5a.cpp) | [part2](ex3.5b.cpp)  


## 练习3.6
> 编写一段程序，使用范围for语句将字符串内的所有字符用X代f替   

[main](ex3.6.cpp)

## 练习3.7
> 就上一题完成的程序而言，如果将循环控制变量的类型设为char将会发生什么？先估计一下结果，然后实际编程进行验证。
```
原来的字符串不会发生改变
```

## 练习3.8
>分别用while循环和传统的for循环重写第一题的程序，你觉得哪种形式更好呢？为什么？   
[main](ex3.8.cpp)

## 练习3.9
>下面的程序有何作用？它合法吗？如果不合法，为什么？
```
不合法，因为对一个空字符串进行s[0]，会产生未定义
```

## 练习3.10
> 编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串输出剩余的部分

[main](ex3.10.cpp)

## 练习3.11
> 下面的范围for语句合法吗？如果合法，c的类型是什么？
```
cout << c;  // 合法的，c的类型 const &char
c = 'x';    // 非法的
```

## 练习3.12
> 下面vector对象的定义有不正确的吗？如果有请指出来。对于正确的，描述其执行的结果：对于不正确的，说明其错误的原因。
```
(a) 正确，结果是 vector
(b) 不正确的，不能用int类型的值，去初始化string类型的值
(c) 正确，结果： 10个null 字符串
```

## 练习3.13
> 下列的vector对象各包含多少元素？这些元素的值分别是多少？
```cpp
(a)vector<int> v1;  // size: 0, 没有值
(b)vector<int> v2(10);  // size: 10, 值：0
(c)vector<int> v3(10, 42) // size: 10  值：42
(d)vector<int> v4{10}; // size: 10 值：0
(e)vector<int> v5{10, 42};  // size: 2, 值：10、42
(f)vector<string> v6{10};  // size: 10， 值：空字符串
(g)vector<string> v7{10, "hi"}; // size: 10, 值: hi

```
## 练习3.16
>编写一段程序，把练习3.13中vector对象的容量和具体内容输出出来。检验你之前的回答是否正确，如果不正确，回头重新学习3.3.1节（第87页）直到弄明白错在何处为止。  
[main](ex3.16.cpp)

## 练习3.18
> 下面程序合法吗？如果不合法，你准备如何修改？
```
不合法
vector<int> ivec(10);
ivec[0] = 42;
```

## 练习3.19
> 如果想定义一个含有10个元素的vector对象，所有元素的值都是42，请列举出三种不同的实现方法。哪种方法更好呢？为什么?

[main](ex3.19.cpp)

## 练习3.20
[part1](ex3.20a.cpp) | [part2](ex3.20b.cpp)
## 练习 3.27

```
（a） 非法，buf_size 不是一个常量表达式，而他是一个变量
（b） 合法的
（c） 非法，这个维度的值必须是一个常量表达式
（d） 非法，这个字符串的长度为 12
```

## 练习 3.28
>下面数值中元素的值是什么？[测试代码](ex3.28.cpp)
```cpp
strint sa[10];  // 10个空字符串
ing ia[10];     // 10个0

int main()
{
    strint sa2[10];   // 10个空字符串
    ing ia2[10];      // 未定义

    return 0;
}
```

## 练习 3.29
```
缺点：大小在声明时必须固定，但是相应地损失一些灵活性
优点：运行性能较好
```

## 练习 3.30
指出下面代码中的索引错误
```
ix 等于 ia数组的数组大小，而ix的值必须小于数组大小
```

## [练习 3.31](ex3.31.cpp)

## [练习 3.32](ex3.32.cpp)

## 练习 3.33
```
未定义
```
## 练习 3.34

```
p1 偏移 (p1 - p2), 从面 p1 p2指向同一个地址

```
## [练习3.35](ex3.35.cpp)

## 练习 3.38
```
两个地址可以相减，但是相加会产生意想不到的结果。
```























