#include "io.h"
#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x{ readNumber() };
    std::cout << "Enter another integer: ";
    int y{ readNumber() };
    std::cout << "Adding these gets: ";
    writeAnswer(x + y);
    return 0;
}