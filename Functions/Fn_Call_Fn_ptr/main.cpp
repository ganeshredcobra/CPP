#include <iostream>

using namespace std;

int foo(int x)
{
    return x+1;
}

int main()
{
    int Result;

    //via implicit dereference:
    int (*fcnPtr)(int) = foo; // assign fcnPtr to function foo
    Result = fcnPtr(5); // call function foo(5) through fcnPtr.
    cout << "Result is " <<Result<< endl;

    //via explicit dereference:
    Result = (*fcnPtr)(6); // call function foo(5) through fcnPtr.
    cout << "Result is " <<Result<< endl;

    return 0;
}
