#include <iostream>
using namespace std;
/* g++ -std=c++11 -o main *.cpp */

int main()
{
    int value = 5;
 
    int *ptr = &value;
    std::cout << *ptr; // dereference pointer to int to get int value
 
    int **ptrptr = &ptr;
    std::cout << **ptrptr; // first dereference to get pointer to int, second dereference to get int value

   
    return 0;
}

