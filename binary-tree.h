#ifndef NULL
#define NULL 0
#endif
struct Node {
    int value;
    Node * pLeft, *pRight;
};

class CBinaryTree {
public:
    CBinaryTree();
    void setRoot(int value);
    void insertLeft(Node* targetNode, int value);  
    void insertRight(Node* targetNode, int value);      
    Node* getRootNode() {
        return m_pRoot;
    }
private:
    Node * m_pRoot;
};