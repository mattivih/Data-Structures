#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "BinSTree.h"

using namespace std;

int main() {

    BinSTree<int> map;
    int searchCount, input;

    srand(time(NULL)); // initializes the pseudorandom number generator

    for (int i = 0; i < 10000; i++) // generates 10000 random numbers
    {
        int j = (rand() % 10000); // generates a random number between 0 – 9999
        printf("%d\n", j);
        map.InsertToTree(j);
    }

    while(input != -1)
    {
        printf("\nEnter number to be searched.\n");
        cin >> input;
        searchCount = map.IsInTree(input);
        if (searchCount != 0)
            printf("\nFound %d comparision needed\n", searchCount);
        else
            printf("\nNot found.\n");
    }
    return 0;
}