#include <iostream>



int main()
{
    std::cout << "Enter a double value: ";
    double num1{};
    std::cin >> num1;
    std::cout << "Enter a double value: ";
    double num2{};
    std::cin >> num2;
    std::cout << "Enter +, -, *, or /: ";
    char sym{};
    std::cin >> sym;

    if(sym == '+')
    {
        std::cout << num1 << " + " << num2 << " is " << num1 + num2 << '\n';
    }
    else if (sym == '-')
    {
        std::cout << num1 << " - " << num2 << " is " << num1 - num2 << '\n';
    }
    else if (sym == '*')
    {
        std::cout << num1 << " * " << num2 << " is " << num1 * num2 << '\n';
    }
    else if (sym == '/')
    {
        std::cout << num1 << " / " << num2 << " is " << num1 / num2 << '\n';
    }

    return 0;
}