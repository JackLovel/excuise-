## 练习 4.1
```
表达式5+10*20/2的求值结果是105
```

## 练习 4.2
>根据4.12节中的表，在下述表达式的合理位置添加括号，使得添加括号后运算对象的组合顺序与添加括号前一致。
```
(a) *vec.begin() => *(vec.begin())
(b) *vec.begin() + 1 => (*vec.begin()) + 1
```

## 练习 4.4
> 在下面的表达式中添加括号，说明其求值的过程及最终结果。编写程序编译该（不加括号的）表达式并输出其结果验证之前的推断。
```
12 / 3 * 4 + 5 * 15 + 24 % 4 /2 
=> ((12 / 3) * 4 + (5 * 15)) + (24 % 4) /2 
=> 91
```

## 练习 4.5
>写出下列表达式的求值结果。
```
(a) - 30 * 3 + 21 / 5 = -86
(b) - 30 + 3 * 21 / 5 = -18
(c) 30 / 3 * 21 % 5 = 0
(d) - 30 / 3 * 21 % 4 = -2
```

## 练习 4.6
>写出一条表达式用于确定一个整数是奇数还是偶数。
```
 i & 0x1 

 当 i 是一个偶数时，结果为 0
 当 i 是一个奇数时，结果为 1
```

## 练习 4.7
> 溢出是何含义？写出三条将导致溢出的表达式。
```
1.溢出的含义？
Some arithmetic expressions yield undefined results. Some of these undefined espressions are due to the nature of mathematics-for example, division by zero. Others are undefined due to the nature of computers-for example, due to overflow. Overflow happens when a value is computed that is outside the range of values that the type can represent.


2.例子
short short_value = 32767; ++short_value; // -32768

-2 % 1 //  -0

unsigned short usvalue = 65535; ++usvalue; // 0
```

## 练习 4.8
>说明在逻辑与、逻辑或及相等性运算符中运算对象求值的顺序。
```
对于逻辑与运算符来说，当且仅当左侧运算对象为真时才对右侧运算对象求值。
对于逻辑或运算符来说，当且仅当左侧运算对象为假时才对右侧运算对象求值。
```

## 练习 4.9
>解释在下面的if语句中条件部分的判断过程
```
cp 是一个指针指向 const char 类型的数值，所以是一个非空的指针，即为真
*cp 指向 H ,该值不是一个空值，即为值。
两个都为真的值逻辑与，那结果也为真。
```

## 练习 4.10
>为while循环写一个条件，使其从标准输入中读取整数，遇到42时停止。
```
int num = 0;
while (cin >> num && num != 42)
```

## 练习 4.10
>书写一条表达式用于测试4个值a、b、c、d的关系，确保a大于b、b大于c、c大于d。
```
a > b && b > c && c > d
```

## 练习 4.12
>假设i、j和k是三个整数，说明表达式i!=j<k的含义。
```
按照运算符优先级表，!= 比 <优先级低, 所以上面的表达式等价于：i!=(j<k>)
```

## 4.13
> 在下述语句中，当赋值完成后i和d的值分别是多少？ 
```cpp
int i; double d;
(a) d = i = 3.5; 
    i = 3; d = 3.0;
(b) i = d = 3.5;
    i = 3; d = 3.5;
```

## 4.14
> 执行下述if语句后将发生什么情况？
```
if(42 = i) // 不会编译通过会报错，因为常量不可以做为左值。
if(i = 42) // 不会报错，42 赋给变量 i , 然后条件部分将会检查 42 是否为 0，显然不为0，所以条件为真。
```

## 练习 4.15
>下面赋值是非法的，为什么？应该如何修改?
>	double dval; int ival; int *pi;
>	ival = dval = 0;
```
因为int * 类型的数并不会转换成int类型,  应该修改成 ival = dval = 0; *pi = 0;
```

## 练习 4.16
>尽管下面的语句合法，但它们实际执行的行为可能和预期并不一样，为什么？应该如何修改？
```
(a) if(p=getPtr() != 0) 正确的写法为：if((p=getPtr) != 0)；
    因为!= 的优先级高于 =, 所以它会先计算 getPtr() != 0部分。显然结果会不一样。
(b) if(i = 1024) 正确的写法：if(i == 1024)；
    因为上式只是将1024赋给i,然后判断1024是否为真，而上式原本的含义是：i
    是否等于0，所以一个等于号要改成双等号。
```

## 练习 4.17
>说明前置递增运算符和后置运算符的区别。
```
1.用的最多的是前置版本
2.前置版本首先将运算对象加1(或减1)，然后将改变的对象作为求值结果。
  后置版本将运算对象加1(或减1),但是求值结果是运算对象改变之前那个值的副本。
3.前置版本将对象作为左值返回，后置版本则将对象原始值的副本作为右值返回。

PS: 但是相同点: 这两种运算符必须作用于左值运算对象
```

## 练习 4.18
>如果第132页那个输出vector对象元素的while循环使用前置递增运算符，将得到什么结果？
```
不会输出vector对象元素第一个字符，然后按要求输出剩下的字符。
```

## 练习 4.19
>假设ptr的类型是指向int的指针、vec的类型是vector<int>、ival的类型是int, 说明下面的表达式是何含义？如果有表达式不正确，为什么？应该如何修改？
```
(a) ptr != 0 && *ptr++
    正确, 表达式含义是输出vector 非0整数。
(b) ival++ && ival
    正确，用于检验ival的值，然后ival的值加1 并且检验ival是否为0;

(c)vec[ival++] <=vec[ival]
   错误，会报未定义的错误, 因为ival++改变了ival本身的值
   正确的做法：vec[ival+1] <= vec[ival] 或 vec[ival] <= vec[ival+1]
```

## 练习 4.20
>假没iter的类型是vector<string>::iterator,说明下面表达式是否合法。
如果合法，表达式的含义是什么？如果不合法，错在何处？
```
(a)*iter++  // 正确，先返回*iter，然后返回++iter。
(b)(*iter)++  // 错误，*iter是一个string类型，不能自增加一
(c)*iter.empty //错误，应该修改为 (*iter).empty()
(d)

```

## 练习 4.23
>因为运算符的优先级问题，下面这条表达式无法通过编译。根据4.12节中的表（第147页）
指出它的问题在哪里？应该如何修改？
```cpp
因为条件运算符的优先级非常低，所以需要在条件运算子表达式两端加上括号。
可以改为：string p1 = ((s + s[s.size() - 1]) == "s") ? "" : "s";
```

## [练习 4.28](https://2101721230-qq.visualstudio.com/_git/Primer%20cpp%20%E7%AC%AC%E4%BA%94%E7%89%88%E4%B9%A0%E9%A2%98?path=%2Fchapter4%2Fex_4.28.cpp&version=GBmaster&fullScreen=true&_a=contents)
>编写一段程序，输出每一种内置类型所占空间的大小

## 练习 4.29
>推断下面代码的输出结果并说明理由。实际运行这段程序，结果和你
想象的一样吗？如果不一样，为什么？
```cpp
int x[10];
int *p = x;

cout << sizeof(x) / sizeof(*x) << endl;  // 10
cout << sizeof(p) / sizeof(*p) << endl;  // 1
```

## 练习 4.30
>根据4.12节中的表（第147页），在下述表达式的适当位置加上括号，使得加上括号之后表达式的含义与原来的含义相同
```cpp
sizeof x + y      // (sizeof x) + y
sizeof p->mem[i]  // sizeof (p->mem[i])
sizeof a < b      // (sizeof a) < b 
sizeof f()        // 会报错，显示错误是：不允许使用不完整的数据类型，除非返回值指定一个数据类型
```

>The program in this section used the prefix increment and decrement operators. Explain why we used prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators.

~~postfix will copy itself as return, then increment or decrement. prefix will increment or decrement first, and return itself. so prefix is more effective in this program.(reduce one copy space.)~~

We use prefix and not postfix, just because of the `Advice: Use Postfix Operators only When Necessary` on `§4.5. Increment and Decrement Operators`.

>**Advice: Use Postfix Operators only When Necessary**

>Readers from a C background might be surprised that we use the prefix increment in the programs we've written. The reason is simple: The prefix version avoids unnecessary work. It increments the value and returns the incremented version.The postfix operator must store the original value so that it can return the unincremented value as its result. If we don’t need the unincremented value, there’s no need for the extra work done by the postfix operator.

>For ints and pointers, the compiler can optimize away this extra work. For more complicated iterator types, this extra work potentially might be more costly. By habitually using the prefix versions, we do not have to worry about whether the performance difference matters. Moreover—and perhaps more importantly—we can express the intent of our programs more directly.

So, it's just a good habits. And there are no changes if we have to be made to use the postfix versions. Rewrite:
```cpp
for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)  
    ivec[ix] = cnt;
```

This is not an appropriate example to discuss the difference of prefix and postfix. Look at the section `Built-in comma operator` on [this page](http://en.cppreference.com/w/cpp/language/operator_other).

-----
reference: [Usage of the Built-in Comma Operator](http://stackoverflow.com/questions/22591387/usage-of-the-built-in-comma-operator)

## Exercise 4.36
>假设i是int类型，d是double类型，书写表达式i*=d使其执行整数类型的乘法而非浮点类型的乘法。
```cpp
i *= static_cast<int>(d)
```

## Exercise 4.37
>用命名的强制类型转换改写下列旧式的转换语句。
```cpp
(a) pv = const_cast<string*> ps
(b) i = static_cast<int>(*pc)
(c) pv = static_cast<void*>(&d)
(d) pc = static_cast<char*> pv
```

## Exercise 4.38
>说明下面这条表达式的含义
```
j/i 返回一个整数, 然后转换成double类型分配给slope.
```





























