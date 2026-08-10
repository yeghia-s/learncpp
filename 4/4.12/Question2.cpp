#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int main()
{
    std::cout << "Enter a single character: ";
    char a{};
    std::cin >> a;
    std::cout << "You entered " << a << ", which has ASCII code ";
    print(a);
    return 0;
}