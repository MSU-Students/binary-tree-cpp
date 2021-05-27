#include <iostream>
#include "binary-tree.h"
using namespace std;



int main() {
    CBinaryTree myTree;
    myTree.setRoot(1);   
    myTree.insertLeft(myTree.getRootNode(), 2);
    myTree.insertRight(myTree.getRootNode(), 3);
    myTree.insertRight(myTree.getRootNode()->pRight, 4);
    return 0;
}