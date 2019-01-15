#include "ex13_28.h"

TreeNode& TreeNode::operator=(const TreeNode &rhs){
    ++*rhs.count;
    if(--*count == 0){
        delete left;
        delete right;
        delete count;
    }
    value = rhs.value;
    count = rhs.count;
    left  = rhs.left;
    right = rhs.right;
    return *this;
}

BinStrTree& BinStrTree::operator=(const BinStrTree &bst){
    TreeNode *new_root = new TreeNode(*bst.root);
    delete root;
    root = new_root;
    return *this;
}

int main(){
    return 0;
}
