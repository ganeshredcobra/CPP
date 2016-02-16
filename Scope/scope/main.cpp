#include <iostream>
using namespace std;
/*Scope of variables */
int main()
{ // outer block
    int apples(5);

    if (apples >= 5)
    { // nested block
        int apples(10); // hides previous variable named apples

        // apples now refers to the nested block apples
        // the outer block apples is hidden

        std::cout << apples<<endl;
    } // nested block apples destroyed

    // apples now refers to the outer block apples
    std::cout << apples<<endl;

    return 0;
} //
