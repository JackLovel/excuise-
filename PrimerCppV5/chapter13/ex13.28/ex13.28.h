#ifndef EX13_28_H
#define EX13_28_H

#include <string>
using std::string;

class TreeNode
{
public:
    TreeNode():value(string()), count(0),
        left(nullptr), right(nullptr){}
    TreeNode(const TreeNode &rhs) : value(rhs.value),
        count(rhs.count), left(rhs.left), right(rhs.right){ ++*count; }
    TreeNode& operator=(const TreeNode &rhs);
    ~TreeNode(){
        if(--*count == 0){
            delete left;
            delete right;
        }
    }
private:
    std::string value;
    int count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree{
public:
    BinStrTree():root(nullptr){}
    BinStrTree(const BinStrTree &bst):root(new TreeNode(*bst.root)){}
    BinStrTree& operator=(const BinStrTree& bst);
    ~BinStrTree(){ delete root; }

private:
    TreeNode *root;
}

#endif // EX13_28_H
