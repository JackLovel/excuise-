### 练习 2.1
> 类型int、long、long long 和 short 的区别是什么？ 无符号类型和带符号类型的区别是什么？float和double的区别什么？
- 算术类型的尺寸不同（类型数据所占的比特数不同）
- 带符号类型可以表示正数、负数或0，无符号类型则仅能表示大于 等于0 的数。
- 精度不同，double 的精度相对float高一点，且double所占用的比特位更大一点

### 练习 2.2 
> 计算按揭贷款时，对于利率、本金和付款分别应该选择何种数据类型？说明你的理由。
     
使用 `float` 或者 `double` 类型，因为经常这类数据涉及到小数，所以选用 `float` 和 `double` 类型。

### 练习 2.3
> 读写程序
```cpp
#include <iostream>
#include "sales_item.h"

int main()
{
    unsigned u = 10, u2 = 42;
    
    std::cout << u2 - u << std::endl;  // 32
    std::cout << u - u2 << std::endl;  // 4294967264
    
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 32 
    std::cout << i - i2 << std::endl; // -32
    std::cout << i - u << std::endl;  // 0
    std::cout << u - i << std::endl;  // 0
    
    return 0;
}
```

输出结果：  
```
32
4294967264
32
-32
0
0
```

### 练习2.5
> 指出下述字面值的数据类型并说明每一组内几种字面值的区别
```
(a) 字符串字面值，宽字符型字面值，字符串字面值，宽字符串字面值
(b) 十进制数，无符号整数，长整数，无符号长整数，八进制整数，十六进制整数
(c) 双精度小数，单精度小数，扩展精度浮点型字面值
(d) 十进制整数，无符号整数，双精度整数，双精度整数
```

### 练习2.6
> 下面两组定义是否有区别，如果有，请叙述之。
```
有区别，前者 使用的十进制的整数，
后者 使用的是 八进制的整数，这是一个非法的用法， 会报 invalid digit "9" in octal的错误 
```
### 练习2.7

> 下述字面值表示何种含义？它们各自和数据类型是值？。
```
(a) "Who goes with Fergus?", 字符串字面值
(b) 31.4, 类型：long double
(c) 非法的写法，f只能修饰浮点数，不能修饰整数
(d)3.14， 类型：long double
```
### 练习2.8
>请利用转义序列编写一段程序，要求先输出2M，然后转到新一行。修改程序使其输出2，然后输出制表符，再输出M，最后转到新一行。

```cpp
#include <iostream>

int main()
{
    std::cout << 2 << "\115\012";
    std::cout << 2 << "\t\115\012";
    return 0;
}
```

### 练习2.9
>解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正。

```
(a) 非法，变量未初始化
(b) 非法，转换未执行，因为存在丢失信息的危险
(c) 非法, wage 未定义
(d) 合法，但是存在精度丢失
```

### 练习2.10
>下面变量的初值分别是什么？

```
空字符串，0，未定义的，未定义的
```

### 练习2.11
>指出下面的语句是声明还是定义？
```
(a) extern int ix = 1024;  // 定义
(b) int iy;   // 声明并且定义
(c) extern int iz; // 声明
```

### 练习2.12
>请指出下面的名字中哪些是非法的？
```
a c d 非法
```

### 练习2.13
>下面程序中j的值是我多少？
```
j 为 100
```
### 练习2.14
>下面程序合法吗？如果合法，它将输出什么？
```
合法，将输出 100 45
```

### 练习2.15
>下面的哪个定义是不合法的？为什么？
```
(a) 合法
(b) 不合法，引用必须是同一个对象
(c) 合法
(d) 不合法，引用必须是同一个对象
```

### 练习2.16
> 考查下面的所有赋值然后回答：哪些赋值是不合法的的？为什么？哪些赋值是合法的？它们执行什么操作？

```
(a) 合法，结果为 3.14159.
(b) 合法，结果会自动的转换
(c) 合法，结果会有精度丢失
(d) 合法，结果会有精度丢失
```

### 练习2.17
> 执行下面的代码段将输出什么结果？

```
10 10
```

### 练习2.18
> 编写代码分别更改指针的值以及指针所指对象的值

```
int b = 23, c = 55;
int * a  = &c;
a = &b;
*a = 25;
```
### 练习2.19
> 说明指针和引用的主要区别
```
第一：指针本身就是一个对象，允许对指针赋值和拷贝，而且在指针的生命周期内它可以先后指向几个不同的对象
第二：指针无须在定义时赋值初值。
```
### 练习2.20
> 请叙下面这段代码的作用
```
p1 指向 i, i 的值改变为 1764(42*42)
```

### 练习2.21 
> 请解释下述定义。在这些定义中有非法的吗？如果有，为什么？
```
(a): 非法, 不能用一个 int * 类型 来初始化一个 double * 类型的变量
(b): 非法, 不能用一个 int 类型来初始化一个 int * 类型的变量
(c): 合法
```
### 练习2.22
> 假定p是一个int型指针，请说明下述代码的含义？
```
if(p)  // p 是否是一个空指针
if(*p) // p 所指的对象是否为 0
```

### 练习2.23
> 给定指针p,你能知道它是否指向了一个合法的对象吗？如果能，叙述判断的思路；如果不能，也请说明原因。
```
不能，因为需要更多的一些信息来判断
```

### 练习2.24
> 在下面这段代码中为什么p合法而pl非法
```
因为 void * p 可以存放任意对象的地址, 而 指针 lp 只能存能 long * 类型的 指针，而不能存放 int *类型的指针。
```

### 练习2.25
> 说明下面变量的类与时
```
(a): ip is a pointer to int, i is an int, r is a reference to int i.
(b): ip is a valid, null pointer, and i is an int.
(c): ip is a pointer to int, and ip2 is an int.
```

### 练习2.26
> 下面哪些句子是合法的？如果有不合法的句子，请说明为什么？

```
(a) 非法，变量未被始化
(b) 合法
(c) 合法，使用了一个变量来初始化const对象
(d) 合法
    不合法，const 对象的值不可以改变
```

### 练习 2.32
> 下面代码是否合法？如果合法，请设法将其修改正确
```cpp
int null = 0, *p = NULL; 
// or 
int null = 0, *p = nullptr;
```