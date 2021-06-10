#include <iostream>
#include <list>
#include "binary-tree.h"
using namespace std;

int main() {
   
    LinkedBinaryTree myBTree;
    myBTree.addRoot();
    myBTree.root();
    myBTree.expandExternal(myBTree.root());
    Position root = myBTree.root(); 
    (*root) = '/';
    Position times = root.left(), plusR = root.right();
    (*times) = 'x';
    (*plusR) = '+';
    myBTree.expandExternal(times);
    myBTree.expandExternal(plusR);
    
    (*(times.right())) = '4';
    Position plusL = times.left();
    (*plusL) = '+';
    myBTree.expandExternal(plusL);
    (*(plusL.right())) = '1';
    (*(plusL.left())) = '3';

    (*(plusR.right())) = '2';
    Position minus = plusR.left();
    (*minus) = '-';
    myBTree.expandExternal(minus);
    (*(minus.right())) = '5';
    (*(minus.left())) = '9';

    PositionList list = myBTree.positions();
    std::list<Position>::iterator it;
    for (it = list.begin(); it != list.end(); ++it){
        cout << **it << " ";
    }

    return 0;
}