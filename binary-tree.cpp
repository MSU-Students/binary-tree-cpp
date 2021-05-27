#include "binary-tree.h"

CBinaryTree::CBinaryTree()
{
    this->m_pRoot = NULL;
}

void CBinaryTree::setRoot(int value)
{
    if (m_pRoot)
    {
        m_pRoot->value = value;
    }
    else
    {
        m_pRoot = new Node();
        m_pRoot->value = 1;
        m_pRoot->pLeft = NULL;
        m_pRoot->pRight = NULL;
    }
}
void CBinaryTree::insertLeft(Node* targetNode, int value) {
    if (targetNode && targetNode->pLeft) {
        targetNode->pLeft->value = value;
    } else {//NULL
        Node* pLeft = new Node();
        targetNode->pLeft = pLeft;
        pLeft->value = value;
        pLeft->pLeft = pLeft->pRight = NULL;
    }
}