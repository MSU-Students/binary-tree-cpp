#ifndef PRIORITYQ_H
#define PRIORITYQ_H
#include "binary-tree.h"

template <typename T>
class PriorityQueue : public LinkedBinaryTree<T> {
public:
    int size() const;
    bool isEmpty() const;
    void insert(const T& e);
    const T& min();
    void removeMin();
};

#include "priority-queue.cpp"
#endif
//PRIORITYQ_H