### 练习6.1
>实参与形参的区别是什么？
```
形参：在函数参数列表中声明的局部变量。
实参：然后被函数调用来初始化形参。
```

### 练习6.2
>请指出下面函数哪个有错误，为什么？应该如何修改这些错误呢？
```
(a) string f() {  //返回值应该是string，而不是int
          string s;
          // ...
          return s;
    }
(b) void f2(int i) { /* ... */ }  // 函数需要返回值类型
(c) int calc(int v1, int v2) { /* ... */ }  // 形参列表里不能有相同的参数
(d) double square (double x) { return x * x; }  // 函数体需要花括号
```

### 练习6.3
>编写你自已的fact函数，上机检查是否正确。[main](ex6.3.cpp)

### 练习6.4
>编写一个与用户交互的函数，要求用户输入一个数字，计算生成该数字的阶乘。在main函数中调用该函数。[main](ex6.4.cpp)

### 练习6.5
>编写一个函数输出其实参的绝对值。[main](ex6.5.cpp)

### 练习6.6
>说明形参、局部变量以及局部静态变量的区别。编写一个函数，同时用到这三种形式。
```
形参：局部变量定义定义在函数参数列表
局部变量：定义在一个块内的
局部静态变量：local static variable（object） is initialized before the first time execution passes through the object’s definition.Local statics are not destroyed when a function ends; they are destroyed when the program terminates.
```

### 练习6.7
> 编写一个函数，当它第一次被调用时返回0，以后每次被调用返回值加1。[main](ex6.7.cpp)

### 练习6.13
>假设T是某种类型的名字，说明以下两个函数声明的区别：一个是void f(T), 另一个是void f(&T).
```
前者只是传的是一个值的副本，而那个值本身并不会改变；
后者是一个值的引用，会改那个值的大小。
```

### 练习6.14
>举一个形参应该是引用类型的例子
```cpp
void reset(int &i)
{
        i = 0;
}
```

>再举一个形参不能是引用类型的例子。
```
void print(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
        for (std::vector<int>::iterator iter = begin; iter != end; ++iter)
                std::cout << *iter << std::endl;
}
```
### 练习6.14
>为什么s是常量而occurs是普通引用？
```
Because s should not be changed by this function, but occurs result must be calculated by the function.
```
>为什么s和occurs是引用类型，而c不是?
```
Because c may be a temp varable, such as find_char(s, 'a', occurs)
```
>如果令occurs是常量引用会发生什么情况
```
s could be changed in the function, and occurs would not be changed. so occurs = 0; is an error.
```

### 练习6.16

>下面的这个函数虽然合法，但不算特别有用。指出它的局限性并设法改善。

```
函数体里并没有改变值的大小，所以并不需要向函数里传引用。
```

### 练习6.17

> 编写一个函数，判断string对象中是否含有大写字母。编写另一个函数，把string对象全部改写成小写形式。在这个函数中你使用的形参类型相同吗？为什么？

[main](ex6.17.cpp)

### 练习6.18
> 为下面的函数编写函数声明，从给定的名字中推测函数具有的功能。
```
(a) bool compare(matrix &m1,  matrix &m2);
(b) vector<int>::iterator change_val(int, vector<int>::iterator);
```
### 练习6.19
>假定有如下声明，判断哪个调用合法、哪个调用不合法。对于不合法的函数调用，说明原因。
```
(a) 合法, 只能传入一个值 (b) 合法 (c) 合法 (d) 合法
```

### 练习6.20
> 引用形参什么时候应该是常量引用？如果形参应该是常量引用，而我们将其设为普通引用，会发生什么情况？

```
(1)当变量有 const 修饰的时候。
(2)调用者可能会修改变量的值。
```
