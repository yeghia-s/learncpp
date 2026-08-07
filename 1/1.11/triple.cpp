#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num{ };
    std::cin >> num;

    std::cout << "Double " << num << " is: " <<  num * 2 << '\n';
    // use an expression to m ultiply num * 2 at the point of printing
    std::cout << "Triple " << num << " is: " <<  num * 3 << '\n';
    
    return 0;
}