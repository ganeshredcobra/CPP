#include <iostream>
#include "foo.h"
#include "goo.h"

/*Accessing a namespace with the scope resolution operator (::)*/

int main(void)
{
    using namespace std;
    cout << Foo::doSomething(4, 3) << endl;
    cout << Goo::doSomething(4, 3) << endl;
    {
        using namespace Foo;
        cout << doSomething(4, 3) << endl;
        // calls to Foo:: stuff here
    } // using namespace Foo expires
 
    {
        using namespace Goo;
        cout << doSomething(4, 3) << endl;
        // calls to Goo:: stuff here
    } // using namespace Goo expires
 
    //cout << doSomething(4, 3) << endl;
    r