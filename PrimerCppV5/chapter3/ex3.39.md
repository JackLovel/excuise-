## String
```cpp
#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1 = "a string example";
	string s2 = "a different string";

	if (s1 < s2)
	{
		cout << "s1 小于 s2" << endl;
	}
	else if (s1 == s2)
	{
		cout << "s1 等于 s2" << endl;
	}
	else
	{
		cout << "s1 大于 s2" << endl;
	}

	system("pause");
	return 0;
}
```

## C语言
```c
#include "stdafx.h"
#include <stdio.h>
#include <string.h>

int main()
{
	coust char ca1[] = "a string example";
	coust char ca2[] = "a different string";

	if (strcmp(ca1, ca2) < 0)
	{
		printf("s1 小于 s2");
	}
	else if (strcmp(ca1, ca2) == 0)
	{
		printf("s1 等于 s2");
	}
	else
	{
		printf("s1 大于 s2");
	}

	return 0;
}
```
