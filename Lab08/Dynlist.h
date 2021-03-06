/* dynlist.h -- Dynamic linked linear list */
#include <iostream>

// Interface of list
template <class T>
class LinkedList {
private:
    // definition of the list node class
    class Node {
    public:
        T     _value;	// data
        Node *_pNext;	// pointer to the next node
        Node *_pPrev;	// pointer to the previous node
        Node() : _pNext(NULL), _pPrev(NULL) {}
        Node(T val) : _value(val), _pNext(NULL), _pPrev(NULL) {}
        Node(T val, Node* next) : _value(val), _pNext(next), _pPrev(NULL) {}
    };

    Node *first;
    Node *last;

public:
    LinkedList();
    ~LinkedList();
    LinkedList<T>& insert_to_end(T data);
    void print(std::ostream &out = std::cout) const;

    void delete_first();
    void delete_last();
    bool find_pos(T item, int &pos);

    LinkedList<T>& insert_to_front(T data);
    LinkedList<T>& insert_to_back(T data);
    void print();
    void print_reverse();
};

// Implementation of list
template <class T>
LinkedList<T>::LinkedList() {
    first = NULL;
    last = NULL;
}

template <class T>
LinkedList<T>::~LinkedList() {

    Node *aux1, *aux2;

    aux1 = first;
    while (aux1 != NULL) {
        aux2 = aux1->_pNext;
        delete aux1;
        printf("\nDeleted"); //for testing purposes
        aux1 = aux2;
    }

}

template <class T>
LinkedList<T>& LinkedList<T>::insert_to_end(T data) {

    Node *newnode = new Node(data);

    if (first == NULL) {
        first = newnode;
    }
    else {
        Node *last = first;
        while (last->_pNext != NULL) {
            last = last->_pNext;
        }
        last->_pNext = newnode;
    }

    return *this;
}

template <class T>
void LinkedList<T>::print(std::ostream &out) const {
    Node *what;

    out << "\nList:";
    what = first;
    while (what != NULL) {
        out << " " << what->_value << " ";
        what = what->_pNext;
    }
    out << std::endl;
}

template <class T>
std::ostream &operator<<(std::ostream &out,  LinkedList<T> const &data) {
    data.print(out);
    return out;
}

template <class T>
void LinkedList<T>::delete_first()
{
    Node *oldFirst = first;
    first = first->_pNext;
    delete oldFirst;
}

template <class T>
void LinkedList<T>::delete_last()
{
    if (first == NULL) {
        // Do nothing
    }
    else if (first->_pNext == NULL){
        delete first;
        first = NULL;
    }
    else {
        Node *last = first;
        Node *secondLast;
        while (last->_pNext != NULL) {
            secondLast = last;
            last = last->_pNext;
        }
        delete last;
        secondLast->_pNext = NULL;
    }
}

template <class T>
bool LinkedList<T>::find_pos(T item, int &pos)
{
    Node *check = first;
    int counter = 0;

    if (first == NULL) {
        return false;
    }
    else {
        while (check->_pNext != NULL) {
            counter++;
            if(check->_value == item){
                pos = counter;
                return true;
            }
            check = check->_pNext;
        }
        if(check->_value == item) {
            counter++;
            pos = counter;
            return true;
        }
    }
    return false;
}

template <class T>
LinkedList<T>& LinkedList<T>::insert_to_front(T data)
{
    Node *newnode = new Node(data);

    if (first == NULL) {
        first = newnode;
        last = newnode;
    }
    else {
        newnode->_pNext = first;
        first->_pPrev = newnode;
        first = newnode;
    }

    return *this;
}

template <class T>
LinkedList<T>& LinkedList<T>::insert_to_back(T data)
{
    Node *newnode = new Node(data);

    if (first == NULL) {
        first = newnode;
        last = newnode;
    }
    else {
        last->_pNext = newnode;
        newnode->_pPrev = last;
        last = newnode;
    }

    return *this;
}

template <class T>
void LinkedList<T>::print(){
    Node *temp;

    std::cout << "\nList:";
    temp = first;
    while (temp != NULL) {
        std::cout << " " << temp->_value << " ";
        temp = temp->_pNext;
    }
}

template <class T>
void LinkedList<T>::print_reverse()
{
    Node *temp;

    std::cout << "\nList:";
    temp = last;
    while (temp != NULL) {
        std::cout << " " << temp->_value << " ";
        temp = temp->_pPrev;
    }
}