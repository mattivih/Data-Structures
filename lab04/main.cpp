#include <iostream>
#include <ctype.h>
#include "stack.h"

int main() {
    Stack<int> stack;
    char input;
    int value, value2;

    std::cout << "This is a RPN calculator. Enter operands and operators: " << std::endl;

    while(1)
    {
        std::cin >> input;
        if(input == '+')
        {
            stack.pop(value);
            stack.pop(value2);
            stack.push(value2+value);
        }
        else if(input == '-')
        {
            stack.pop(value);
            stack.pop(value2);
            stack.push(value2-value);
        }
        else if(input == '=')
        {
            stack.pop(value);
            std::cout << value << std::endl;
            stack.push(value);
        }
        else if(input == 'Q')
        {
            stack.print();
        }
        else
        {
            if (isdigit(input))
            {
                input -= 48;
            }
            stack.push(input);
        }
    }
}