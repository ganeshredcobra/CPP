#include <iostream>
#include <cstddef> // for std::nullptr_t

using namespace std;

void doSomething(std::nullptr_t ptr)
{
    std::cout << "in doSomething()\n";
}

int main()
{
    doSomething(nullptr); // call doSomething with an argument of type std::nullptr_t

    return 0;
}
