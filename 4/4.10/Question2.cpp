#include <iostream>

int main()
{
    std::cout << "Enter a number between 0 and 9 (inclusive): ";
    int num{};
    std::cin >> num;
    if(num == 2 | num == 3 | num == 5 | num == 7)
    {
        std::cout << "The digit is prime." << '\n';
    }
    else
    {
        std::cout << "The digit is not prime." << '\n';
    }
    return 0;
}