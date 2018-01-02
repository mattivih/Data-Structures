#include <iostream>
#include <list>
#include <vector>
#include <numeric>
#include "Time.h"
#include "Dynlist.h"
/*
bool order(Time a, Time b)
{
    if (b < a)
    {
        return false;
    }
    return true;
}

int main()
{
    vector<Time> list;
    vector<Time> differences;
    Time       item;
    int firstLine = 0;


    std::cout << "Enter times (terminate with 0 0): ";
    std::cin >> item;

    while (!(item == Time(0, 0)))
    {
        list.push_back(item);
        std::cin >> item;
    }

    //Print UNSORTED list
    std::cout << "\nUnsorted items:\n";
    for (int i = 0; i < list.size(); i++)
    {
        std::cout << list[i] << "\n";
    }

    sort(list.begin(), list.end(), order);

    //Print SORTED list
    std::cout << "\nSorted items: \n";
    for (int i = 0; i < list.size(); i++)
    {
        std::cout << list[i] << "\n";
    }

    std::cout << "\nTime differences";

    adjacent_difference(list.begin(), list.end(), back_inserter(differences));

    //Print Time differences list
    for (int i = 0; i < differences.size(); i++)
    {
        std::cout << "\n" << list[i] << " ";
        if(firstLine != 0)
        {
            std::cout << differences[i];
        }
        firstLine++;
    }

    return 0;
}
*/


int main(void) {

    LinkedList<int> dbl;

    dbl.print();
    dbl.print_reverse();

    dbl.insert_to_back(10);
    dbl.print();
    dbl.print_reverse();

    dbl.insert_to_front(20);
    dbl.print();
    dbl.print_reverse();

    dbl.insert_to_back(30);
    dbl.print();
    dbl.print_reverse();

    dbl.insert_to_front(40);
    dbl.print();
    dbl.print_reverse();

    dbl.insert_to_back(50);
    dbl.print();
    dbl.print_reverse();

    return EXIT_SUCCESS;
}
