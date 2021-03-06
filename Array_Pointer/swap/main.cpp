#include <algorithm> // for std::swap, use <utility> instead if C++11
#include <iostream>

int main()
{
    int x = 2;
    int y = 4;
    std::cout << "Before swap: x = " << x << ", y = " << y << '\n';
    std::swap(x, y); // swap the values of x and y
    std::cout << "After swap:  x = " << x << ", y = " << y << '\n';
}
