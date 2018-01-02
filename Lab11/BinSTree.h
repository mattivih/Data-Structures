#include <iostream>

template <class T>
class BinSTree {
private:
    // definition of the list node class
    class Node {
    public:
        T     _value;	// data
        Node *_pRight;	// pointer to the right node
        Node *_pLeft;	// pointer to the left node
        Node() : _pRight(NULL), _pLeft(NULL) {}
        Node(T val) : _value(val), _pRight(NULL), _pLeft(NULL) {}
        Node(T val, Node* next) : _value(val), _pRight(NULL), _pLeft(NULL) {}
    };

    Node *first;
    int count = 0;

public:
    BinSTree();
    void InsertToTree(T data);
    int IsInTree(T data);
    bool Recursion(T data, Node *current);
};

template <class T>
BinSTree<T>::BinSTree()
{
    first = NULL;
}

template <class T>
void BinSTree<T>::InsertToTree(T data)
{
    Node *newnode = new Node(data);

    if (first == NULL)
        first = newnode;
    else
    {
        Node *current = first, *aid;
        while (current) {
            aid = current;
            if (data < current->_value)
                current = current->_pLeft;
            else
                current = current->_pRight;
        }
        if (data < aid->_value)
            aid->_pLeft = newnode;
        else
            aid->_pRight = newnode;

    }
}

template <class T>
int BinSTree<T>::IsInTree(T data)
{
    bool temp = false;
    count = 0;

    if (first == NULL)
        return 0;
    else
    {
        Node *current = first;
        temp = Recursion(data, current);
        if(temp)
            return count;
        else
            return 0;
    }
}

template <class T>
bool BinSTree<T>::Recursion(T data, Node *current)
{
    if (current != NULL){
        if (data == current->_value) {
            return true;
        } else if (data < current->_value) {
            count++;
            return Recursion(data, current->_pLeft);
        } else {
            count++;
            return Recursion(data, current->_pRight);
        }
    }else{
        return false;
    }

}