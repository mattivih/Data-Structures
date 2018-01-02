/* standard array queue implementation */
#include <iostream>

using namespace std;

// The interface of queue
#define MAXN 5
template <class T>
class Queue {
private:
    T *array;
    int number_of_items, size = 5;
    bool firstIteration = true;
public:
	Queue();
	bool enqueue(T item);
	bool dequeue(T &item);
	void print();

};


// The implementation of queue
template <class T>
Queue<T>::Queue() {
	number_of_items = 0;
    array = new T[MAXN];
}

template <class T>
bool Queue<T>::enqueue(T item) {

    if (number_of_items % 5 == 0){
        size += number_of_items;
        T *largerArray = new T[size+number_of_items];

        for(int i = 0; i < size; i++){
            largerArray[i] = array[i];
        }

        delete[] array;

        array = largerArray;

    }
    array[number_of_items++] = item;
    return (true);
}

template <class T>
bool Queue<T>::dequeue(T &item) {
    int i;

    if (number_of_items == 0)
        return(false);
    else {
        item = array[0];
        for (i = 0; i < number_of_items-1; i++)
            array[i] = array[i+1];
        number_of_items--;
        return (true);
   }
}

template <class T>
void Queue<T>::print() {
    int i;

    cout << "\nQueue now: \n\n";
    for (i = 0; i < number_of_items; i++ ) {
        cout << " " << array[i] << "";
    }
    cout << "\n\n";
}