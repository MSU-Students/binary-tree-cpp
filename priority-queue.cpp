
#include "priority-queue.h"
#include "binary-tree.h"
#ifndef PRIORITYQ_CPP
#define PRIORITYQ_CPP

template <typename T>
int PriorityQueue<T>::size() const  {
    return LinkedBinaryTree<T>::size();
}
template <typename T>
bool PriorityQueue<T>::isEmpty() const{
    return LinkedBinaryTree<T>::empty();
}
template <typename T>
void PriorityQueue<T>::insert(const T& e) {
    if (isEmpty()) { //empty
        LinkedBinaryTree<T>::addRoot();
        *LinkedBinaryTree<T>::root() = e;
    } else if(*LinkedBinaryTree<T>::root() > e){
        //Assignment 1

    }
}
template <typename T>
const T& PriorityQueue<T>::min(){
    return *LinkedBinaryTree<T>::root();
}
template <typename T>
void PriorityQueue<T>::removeMin() {
    //TODO: mark
    //remove root
}

#endif
//PRIORITYQ_CPP