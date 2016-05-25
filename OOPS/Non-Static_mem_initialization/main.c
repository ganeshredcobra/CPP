#include <iostream>
/*
Even though we’ve provided default values for all members, no default constructor has been provided,
so we are unable to create Square objects with no parameters.
If a default initialization value is provided and the constructor initializes the member via the member 
initializer list, the member initializer list will take precedence.
*/

using namespace std;

class Square
{
private:
    double m_length = 1.0;
    double m_width = 1.0;
 
public:
 
    // note: No default constructor provided in this example
 
    Square(double length, double width)
        : m_length(length), m_width(width)
    {
        // m_length and m_width are initialized by the constructor (the default values aren't used)
    }
 
    void print()
    {
        std::cout << "length: " << m_length << ", width: " << m_width << '\n';
    }
 
};

int main()
{
   //Square x; // will not compile, no default constructor exists, even though members have default initialization values
   Square x(2.0, 3.0);
   x.print();
   
   return 0;
}

