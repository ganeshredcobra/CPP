#include <iostream>

using namespace std;

int main()
{
    int value = 5;
    int *ptr = &value; // initialize ptr with address of variable value

    std::cout << &value << endl; // print the address of variable value
    std::cout << ptr << endl; // print the address that ptr is holding
    std::cout << *ptr << endl;

    return 0;
}
