#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <list>
#ifndef NULL
#define NULL 0
#endif
#pragma once
template <class T>
struct Node {
    T elem;
    Node<T> * left, *right, *par;
    Node():elem(0), par(NULL), left(NULL), right(NULL){}
};

template <class T>
class Position {
    private:
        Node<T>* v;
    public:
        Position(Node<T>* _v = NULL):v(_v){}
        T& operator *() {  // get 
            return v->elem;
        }
        Position<T> left() const { // get left child
            return Position(v->left);
        }
        Position<T> right() const { // get right child
            return Position<T>(v->right);
        }
        Position<T> parent() const { // get parent
            return Position(v->par);
        }
        bool isRoot() const {
            return v->par == NULL;
        }
        bool isExternal() const {
            return v->left == NULL && v->right == NULL;
        }   
        template <class>friend class LinkedBinaryTree;  // give tree access
};



template <class T>
class LinkedBinaryTree {
public:
    typedef std::list<Position<T>> PositionList;
    LinkedBinaryTree();
    int size() const;
    bool empty() const; 
    Position<T> root() const;
    PositionList positions() const;
    void addRoot(); 
    void expandExternal(const Position<T>& p);  // expand external node
    Position<T> removeAboveExternal(const Position<T>& p);
protected:
    void preorder(Node<T>* v, PositionList& pl) const; // preorder utility
private:
    Node<T> * _root;
    int n;
};

#include "binary-tree.cpp"
#endif 
