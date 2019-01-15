## 练习9.2
> 定义一个list对象，其元素类型是int的deque
```
std::list<std::deque<int>> list_of_int_deque;
```

## 练习9.3
```
两个迭代器 begin 和 end
1. 都指向同一个容器
2. 对 begin 递增若干次，使得 begin == end 
```

## 练习9.4 和 练习9.5
> [main](ex9.4_5.cpp)

## 练习9.6
> 下面程序有何错误？你应该如何修改它？

```cpp
while(item1 < item2) 
```
fixed:
```cpp
while(item1 != item2)
```

## 练习 9.7
```
vector<int>::size_type
```

## 练习9.8
```
list<string>::const_iterator  // to read
list<string>::iterator  // to write
```

## 练习9.9
```
cbegin is a const member that returns the container’s const_iterator type.
begin is nonconst and returns the container’s iterator type.
```

## 练习9.10
```
(1) vector<int>::iterator
(2) vector<int>::const_iterator
(3) vector<int>::const_iterator
(4) vector<int>::const_iterator
```

## 练习9.11
```
vector<int> vec;             // 0
vector<int> vec(2);          // 0, 0
vector<int> vec1(2, 3);      // 3, 3
vector<int> vec{2, 2, 2};   // 2, 2, 2
vector<int> vec(vec1);      // 3, 3
vector<int> vec(vec1.begin(), vec1.end());  // 3, 3
```
## 练习 9.23
>在本节第一个程序(第309页)中，若c.size() 为1，则val、val2、val3和val4的值会是什么？
```
所得到的结果都会等于容器里的第一个元素。
```

## 练习 9.25
>对于第312页中删除一个范围内的元素的程序，如果elem1与elem2相等会发生什么？如果elem2是尾后迭代器，或者elem1和elem2皆为尾后迭代顺，又会发生什么？
```
1.如果elem1与elem2相等，那么将什么也不会发生。
2.如果elem2是尾后迭代器，那么将删除最后的elem1元素。
3.如果elem1和elem2都是尾后迭代器，那么将会什么也不会发生。
```
## 练习9.28
```cpp
void find_and_insert(forward_list<string> &list, string const& to_find, string const& to_add)
{
    auto prev = list.before_begin();
    for (auto curr = list.begin(); curr != list.end(); prev = curr++)
    {
        if (*curr == to_find)
        {
            list.insert_after(curr, to_add);
            return;
        }
    }
    list.insert_after(prev, to_add);
}
```
## 练习 9.29
>假定vec包含25个元素，那么vec.resize(100)会做什么？如果接下来调用vec.resize(10)会做什么？
```
1.如果 vec.resize(100) 那么剩下的 75个0添加到 容器未尾。
2.如果 vec.resize(10) 那么就会删除尾部的 15个元素。
```

## 练习 9.35
>解释一个vector的capacity和size有何区别？
```
size 是指它已经保存的元素的数目，而capacity则是在不分配新的内存空间的前提下它最多可以保存多少元素。
```

## 练习 9.36
>一个容器的capacity可能小于它的size吗？
```
不可能
```

## 练习 9.37
>为什么list或者array没有capacity成员函数？
```
因为列表的元素不连续，以及数组的大小是固定的。
```

## 练习 9.38

>因为svec 起始大小为 0, 所以reserve 不会做任何的操作，while读取用户输入的字符串，添加到vector，此时    vector.size() 加1，vector 也会分配多余的空间，以备下次添加元素，此时的vector.capacity() 大小不再是    0 ，而是大于等于 vector.size() 的大小， 最后一步，更改元素的个数为 svec.size() + svec.size() / 2，   显然大于svec实际的元素个数，所有会添加 svec.size() / 2 个 " " 空字符串。 

## 练习 9.42
>假定你希望每次读取一个字符存入一个string中，而且知道最少需要读取100个字符，就该如何提高
程序的性能？
```
预先分配大于100的个内存空间，比如分配 reserve(120)
```

## 练习9.48
```
string::npos (表明搜索失败)
```



















