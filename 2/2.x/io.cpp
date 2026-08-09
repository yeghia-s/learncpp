#include "io.h"
#include <iostream>

int readNumber()
{
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int a)
{
    std::cout << a << '\n';
}