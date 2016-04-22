/* g++ -std=c++11 -o main *.cpp */
#include <iostream>
#include <array>
using namespace std;
 
void printSize(const std::array<double, 5> &myarray)
{
    std::cout << "size: " << myarray.size();
}
 
int main()
{
    std::array<double, 5> myarray { 9.0, 7.2, 5.4, 3.6, 1.8 };
    
    myarray.at(1) = 6; // array element 1 valid, sets array element 1 to value 6
    //myarray.at(9) = 10; // array element 9 is invalid, will throw error
 
    printSize(myarray);
 
    return 0;
}