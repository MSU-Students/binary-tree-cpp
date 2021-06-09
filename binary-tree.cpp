#include "binary-tree.h"
LinkedBinaryTree::LinkedBinaryTree() {

}
int LinkedBinaryTree::size() const {
    return 0;
}
bool LinkedBinaryTree::empty() const {
    return false;
} 
Position LinkedBinaryTree::root() const {
    return Position();
}
PositionList LinkedBinaryTree::positions() const {
    PositionList pl;
    return PositionList(pl);
}
void LinkedBinaryTree::addRoot() {

} 
void LinkedBinaryTree::expandExternal(const Position& p) {
    Node* v = p.v;              
    v−>left = new Node; 
    v−>left−>par = v; 
    v−>right = new Node;
    v−>right−>par = v; 
    n += 2; 
}  // expand external node
Position LinkedBinaryTree::removeAboveExternal(const Position& p) {
    Node* w = p.v; Node* v = w->par;                                    // get p�s node and parent
    Node* sib = (w == v->left ? v->right : v->left);
    if (v == _root) {                                                    // child of root?
        _root = sib;                                                     // . . .make sibling root
        sib->par = NULL;
    }
    else {
        Node* gpar = v->par;                                            // w�s grandparent
        if (v == gpar->left) gpar->left = sib;                          // replace parent by sib
        else gpar->right = sib;
        sib->par = gpar;
    }
    delete w; delete v;                                                 // delete removed nodes
    n -= 2;                                                             // two fewer nodes
    return Position(sib);
}
void LinkedBinaryTree::preorder(Node* v, PositionList& pl) const {
    pl.push_back(Position(v));
    if (v->left != NULL) {
        preorder(v->left, pl);
    }
    if (v->right != NULL) {
        preorder(v->right, pl);
    }
} 