#include "binary-tree.h"
#ifndef BINARY_TREE_CPP
#define BINARY_TREE_CPP
template <class T>
LinkedBinaryTree<T>::LinkedBinaryTree() {

}
template <class T>
int LinkedBinaryTree<T>::size() const {
     return size(root->right) + size(root->left) + 1; //TODO:For Chris
}
template <class T>
bool LinkedBinaryTree<T>::empty() const {
    //TODO:for Naim
    return false;
}
template <class T> 
Position<T> LinkedBinaryTree<T>::root() const {
    return Position<T>(_root);
}
template <class T>
std::list<Position<T>> LinkedBinaryTree<T>::positions() const {
    PositionList pl;
    preorder(_root, pl);
    return PositionList(pl);
}
template <class T>
void LinkedBinaryTree<T>::addRoot() {
    _root = new Node<T>;
    n = 1;
} 
template <class T>
void LinkedBinaryTree<T>::expandExternal(const Position<T>& p) {
    Node<T>* v = p.v;              
    v->left = new Node<T>; 
    v->left->par = v; 
    v->right = new Node<T>;
    v->right->par = v; 
    n += 2; 
}  // expand external node
template <class T>
Position<T> LinkedBinaryTree<T>::removeAboveExternal(const Position<T>& p) {
    Node<T>* w = p.v; Node<T>* v = w->par;                                    // get p�s node and parent
    Node<T>* sib = (w == v->left ? v->right : v->left);
    if (v == _root) {                                                    // child of root?
        _root = sib;                                                     // . . .make sibling root
        sib->par = NULL;
    }
    else {
        Node<T>* gpar = v->par;                                            // w�s grandparent
        if (v == gpar->left) gpar->left = sib;                          // replace parent by sib
        else gpar->right = sib;
        sib->par = gpar;
    }
    delete w; delete v;                                                 // delete removed nodes
    n -= 2;                                                             // two fewer nodes
    return Position<T>(sib);
}
template <class T>
void LinkedBinaryTree<T>::preorder(Node<T>* v, PositionList& pl) const {
    pl.push_back(Position<T>(v));
    if (v->left != NULL) {
        preorder(v->left, pl);
    }
    if (v->right != NULL) {
        preorder(v->right, pl);
    }
} 
#endif
// template class LinkedBinaryTree<char>;
// template class LinkedBinaryTree<int>;