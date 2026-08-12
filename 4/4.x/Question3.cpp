#include <iostream>

double distance_fallen(int s)
{
    return 9.8 * (s * s) / 2;
}

int main()
{
    std::cout << "Enter the height of the tower in metres: ";
    double height{};
    std::cin >> height;
    int seconds{0};
    while(seconds <= 5)
    {
        if (height - distance_fallen(seconds) > 0)
        {
            std::cout << "At " << seconds << " seconds, the ball is at height: " 
                << height - distance_fallen(seconds) << "metres.\n";
            ++seconds;
        }
        else 
        {
            std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
            ++seconds;
        }
    }
    return 0;
}
