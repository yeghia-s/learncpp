#include <iostream>

int main()
{
    int x{};
    int y{};
    int z{};

    std::cout << "Enter 3 numbers separated by spaces: ";
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << " and " << z << '\n';
}