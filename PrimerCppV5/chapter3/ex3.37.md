### 输出内容

<img src="https://2101721230-qq.visualstudio.com/e2623fda-7277-4694-9054-ca38f3b77bcb/_api/_versioncontrol/itemContent?repositoryId=71ee2fb5-0bde-41bf-bb44-a2f7dd7b6475&path=%2Fchapter3%2Fimg%2F%E8%BE%93%E5%87%BA%E5%86%85%E5%AE%B9.png&version=GBmaster&contentOnly=true&__v=5" width="40%"/>

### 正确的做法

该代码的本来的意思是，逐个输出数组里的字符，但是代码定义数组部分需要添加  `'\0'` 字符，不然会出现未定义的情况。
```cpp
const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
```