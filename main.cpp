#include <iostream>
#include <list>
#include "binary-tree.h"
using namespace std;

int main() {
   
    LinkedBinaryTree<char> myBTree;
    myBTree.addRoot();
    myBTree.expandExternal(myBTree.root());
    Position<char> root = myBTree.root(); 
    (*root) = '/';
    Position<char> times = root.left(), plusR = root.right();
    (*times) = 'x';
    (*plusR) = '+';
    myBTree.expandExternal(times);
    myBTree.expandExternal(plusR);
    
    (*(times.right())) = '4';
    Position<char> plusL = times.left();
    (*plusL) = '+';
    myBTree.expandExternal(plusL);
    (*(plusL.right())) = '1';
    (*(plusL.left())) = '3';

    (*(plusR.right())) = '2';
    Position<char> minus = plusR.left();
    (*minus) = '-';
    myBTree.expandExternal(minus);
    (*(minus.right())) = '5';
    (*(minus.left())) = '9';

    std::list<Position<char>> list = myBTree.positions();
    std::list<Position<char>>::iterator it;
    for (it = list.begin(); it != list.end(); ++it){
        cout << **it << " ";
    }

    return 0;
}