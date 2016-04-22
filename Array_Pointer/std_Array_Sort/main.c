/* g++ -std=c++11 -o main *.cpp */
#include <iostream>
#include <array>
#include <algorithm> // for std::sort
 
using namespace std;

int main()
{
    std::array<int, 5> myarray { 7, 3, 1, 9, 5 };
    myarray.at(1) = 6;
    std::sort(myarray.begin(), myarray.end()); // sort the array forwards
//    std::sort(myarray.rbegin(), myarray.rend()); // sort the array backwards
 
    for (const auto &element : myarray)
        std::cout << element << ' ';
 
    return 0;
}