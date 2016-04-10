#include <iostream>

void printSizeS(int *array)
{
    // array is treated as a pointer here
    std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

// C++ will implicitly convert parameter array[] to *array
void printSize(int array[])
{
    // array is treated as a pointer here, not a fixed array
    std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

int main()
{
    int array[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
    std::cout << sizeof(array) << '\n';
    printSize(array); // the array argument decays into a pointer here
    printSizeS(array); // the array argument decays into a pointer here

     return 0;
}
