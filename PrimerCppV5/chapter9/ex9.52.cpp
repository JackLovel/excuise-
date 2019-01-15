// 抄的代码，写一点分析

#include <stack>
#include <string>
#include <iostream>

using std::string; using std::cout; using std::endl; using std::stack;

int main()
{
    string expression{ "This is (pezy)." };
    bool bSeen = false;
    stack<char> stk;
    for (const auto &s : expression)
    {
        if (s == '(') { bSeen = true; continue; }
        else if (s == ')') bSeen = false;

        if (bSeen) stk.push(s);  // => stk: yzep)
    }
    
    string repstr;
    while (!stk.empty())
    {
        repstr += stk.top(); // => repstr: 'yzep)', type: string
        stk.pop();
    }

    // 从expression 'p' 索引处 进行替换，结果为 This is (yzep).
    expression.replace(expression.find("(")+1, repstr.size(), repstr);

    cout << expression << endl;

    return 0;
}