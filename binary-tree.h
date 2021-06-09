#include <list>
#ifndef NULL
#define NULL 0
#endif

typedef int Elem;

struct Node {
    Elem elem;
    Node * left, *right, *par;
    Node():elem(0), par(NULL), left(NULL), right(NULL){}
};

class Position {
    private:
        Node* v;
    public:
        Position(Node* _v = NULL):v(_v){}
        Elem& operator *() {  // get element
            return v->elem;
        }
        Position left() const { // get left child
            return Position(v->left);
        }
        Position right() const { // get right child
            return Position(v->right);
        }
        Position parent() const { // get parent
            return Position(v->par);
        }
        bool isRoot() const {
            return v->par == NULL;
        }
        bool isExternal() const {
            return v->left == NULL && v->right == NULL;
        }   
        friend class LinkedBinaryTree;  // give tree access
};
typedef std::list<Position> PositionList;

class LinkedBinaryTree {
public:
    LinkedBinaryTree();
    int size() const;
    bool empty() const; 
    Position root() const;
    PositionList positions() const;
    void addRoot(); 
    void expandExternal(const Position& p);  // expand external node
    Position removeAboveExternal(const Position& p);
protected:
    void preorder(Node* v, PositionList& pl) const; // preorder utility
private:
    Node * _root;
    int n;
};
