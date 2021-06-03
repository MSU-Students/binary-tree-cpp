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

}  // expand external node
Position LinkedBinaryTree::removeAboveExternal(const Position& p) {
    return Position();
}
void LinkedBinaryTree::preorder(Node* v, PositionList& pl) const {

} // preorder utility