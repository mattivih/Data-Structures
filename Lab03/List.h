#include <stdexcept>

#define  MAX 10

//Interface of the list
template <class T>
class List {
private:
	int count;
	T   array[MAX];
	void compress(T *array, int empty_slot, int n);

public:
	List();
	bool     empty();
	int      size();
	const T &operator[](int i) const;
	bool     insert_to_end(T item);
    bool     insert_to_begin(T item);
	bool 	 insert(T item);
	bool     find_pos(T item, int *pos);
	bool     del(int orderNo);
};

//Implementation of list
template<class T>
List<T>::List() {
	count = 0;
}

template <class T>
bool List<T>::empty() {
	return count == 0;
}

template <class T>
int List<T>::size() {
	return count;
}

template <class T>
const T &List<T>::operator[](int i) const {
	if (count > 0 && i <= count)
		return array[i - 1];
	else
		throw range_error("Index error");
}

template <class T>
bool List<T>::insert_to_end(T item) {
	if (count < MAX) {
		array[count++] = item;
		return true;
	}
	else
		return false;
}

template <class T>
bool List<T>::insert_to_begin(T item) {
	if (count ==0 ){
		array[count] = item;
		count++;
		return true;
	}
	else{
		for(int i = count-1; i >= 0; i--){
			array[i+1] = array[i];
			if(i == 0){
				array[0] = item;
				count++;
				return true;
			}
		}
	}
	return false;
}
/*
template <class T>
bool List<T>::insert(T item){
	T temp = new T;
	T temp2 = new T;
	temp = array[0];
	temp2 = NULL;
	for(int i = 1; i < count; i++){
		if (array[i] < temp) {
			temp2& = temp;
			array.insert_to_begin(array[i]);
			array[i+1].

		}
	return true;
	}
}
*/
template <class T>
bool List<T>::find_pos(T item, int *pos) {
	int i;

	for (i = 0; i < count; i++) {
		if (array[i] == item) {
			*pos = i;
			return true;
		}
	}

	return false;
}

template <class T>
bool List<T>::del(int orderNo) {
	if (orderNo >= 0 && orderNo < count) {
		//take item out means nothing
		compress(array, orderNo, count);
		count--; 	// or should this be inside compress
		return true;
	}
	else
		return false;
}

// This is "private" low level function used to implement public
// operation function delete_item
template <class T>
void List<T>::compress(T *array, int empty_slot, int n) {
	int i;

	for (i = empty_slot + 1; i < n; i++)
		array[i - 1] = array[i];
}
