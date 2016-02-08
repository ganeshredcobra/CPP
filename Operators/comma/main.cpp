#include <iostream>

int main()
{
    int x = 0;
    int y = 2;
    int z = (++x, ++y); // increment x and y and return value to z
    std::cout <<"Z is :"<<z<<std::endl;
    z = ++x, ++y; // evaluates as "(z = a), b", so z gets assigned the value of a, and b is discarded.
    std::cout <<"Z is :"<<z<<std::endl;
}
