#include <iostream>
#include "dynlist.h"

int main() {
    LinkedList<char> list;
    int order_no;
    char to_be_searched;
    list.delete_last();
    list.insert_to_end('?');
    list.delete_last();
    list.insert_to_end('x');
    list.insert_to_end('a');
    list.insert_to_end('b');
    list.insert_to_end('c');
    list.insert_to_end('d');
    list.insert_to_end('y');
    list.print();
    std::cout << "Enter first character to be searced\n";
    std::cin >> to_be_searched;
    if (list.find_pos(to_be_searched, order_no))
        std::cout << "The order no is " << order_no << std::endl;
    else
        std::cout << "Not found\n";
    std::cout << "Enter second character to be searced\n";
    std::cin >> to_be_searched;
    if (list.find_pos(to_be_searched, order_no))
        std::cout << "The order no is " << order_no << std::endl;
    else
        std::cout << "Not found\n";
    list.delete_first();
    std::cout << list;
    list.delete_last();
    std::cout << list;
    return (EXIT_SUCCESS);
}