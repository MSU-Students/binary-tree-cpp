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
    return PositionList();
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
    return Position();
}
void LinkedBinaryTree::preorder(Node* v, PositionList& pl) const {

} // preorder utility