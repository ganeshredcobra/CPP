#include <cstdlib> // needed for exit()
#include <iostream>

/* Halt */

int main()
{
    std::cout << 1;
    exit(0); // terminate and return 0 to operating system

    // The following statements never execute
    std::cout << 2;
    return 0;
}
