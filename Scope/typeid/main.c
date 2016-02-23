#include <iostream>
#include <typeinfo> // for typeid()

/* typeid int */
 
int main()
{
    short a(4);
    short b(5);
	double d(4.0);
    short s(2);
	
    std::cout << typeid(a + b).name() << " " << a + b << std::endl; // show us the type of a + b
	std::cout << typeid(d + s).name() << " " << d + s << std::endl; // show us the type of d + s
 
    return 0;
}