#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    std::cout << "Enter an integer: ";
    int value{};
    std::cin >> value;
    std::cout << "Double that is: " <<
    doubleNumber(value) << '\n';
    return 0;
}