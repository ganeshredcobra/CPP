#include <iostream>

using namespace std;

class Accumulator
{
private:
    int m_value;
public:
    Accumulator() { m_value = 0; } 
    void add(int value) { m_value += value; }
    int Print() { return m_value; }
    // Make the reset() function a friend of this class
    friend void reset(Accumulator &accumulator);
};
 
// reset() is now a friend of the Accumulator class
void reset(Accumulator &accumulator)
{
    // And can access the private data of Accumulator objects
    accumulator.m_value = 0;
}
 
int main()
{
    Accumulator acc;
    cout <<"m_value is : "<<acc.Print()<<endl;
    acc.add(5); // add 5 to the accumulator
    cout<<"m_value is : "<<acc.Print()<<endl;
    reset(acc); // reset the accumulator to 0
    cout <<"m_value is : "<<acc.Print()<<endl;
 
    return 0;
}