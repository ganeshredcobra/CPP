#include <iostream>

int main()
{
    int array[5] = { 9, 7, 5, 3, 1 };

    // print the value of the array variable
    std::cout << "The array has address: " << array << '\n';

    // print address of the array elements
    std::cout << "Element 0 has address: " << &array[0] << '\n';

    return 0;
}
