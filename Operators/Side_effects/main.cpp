#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int x = 5;
    int value = add(x, ++x); // is this 5 + 6, or 6 + 6?  It depends on what order your compiler evaluates the function arguments in

    std::cout << value; // value could be 11 or 12, depending on how the above line evaluates!
    return 0;
    return 0;
}
