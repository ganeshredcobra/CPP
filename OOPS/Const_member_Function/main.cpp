#include <iostream>

using namespace std;

class Something
{
public:
    int m_value;
 
    Something(): m_value(0) { }
 
    void setValue(int value) { m_value = value; }
    int getValue() { return m_value ; }
    int getValues() const { return m_value; } // note addition of const keyword after parameter list, but before function body
};
 

int main()
{
    const Something something; // calls default constructor
 
    //something.m_nValue = 5; // compiler error: violates const
    //something.setValue(5); // compiler error: violates const
    
    // std::cout << something.getValue(); // compiler error: Not a Const member Function
    /*
    getValue() has not been marked as a const member function. 
    A const member function is a member function that guarantees it will not change any class variables 
    or call any non-const member functions.
    */
   
    std::cout << something.getValues();
    
   return 0;
}

