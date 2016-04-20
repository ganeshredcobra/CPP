#include <iostream>

/* g++ -std=c++11 -o main *.cpp */
 
int main()
{
    int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    for (int number : fibonacci) // iterate over array fibonacci
       std::cout << number << ' '; // we access the array element for this iteration through variable number
 
    return 0;
}