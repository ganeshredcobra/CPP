#include <iostream>

using namespace std;

class Something
{
private:
    int m_value1;
    double m_value2;
    int *m_value3;

public:
    Something() : m_value1(0), m_value2(0.0), m_value3(0) // directly initialize our member variables
    {
    // No need for assignment here
    }
    int getNum() { return m_value1; }
    int getDen() { return m_value2; }
};

int main()
{
    Something some;
    cout << "m_value1 : "<<some.getNum()<< " m_value2 : "<<some.getDen()<< endl;
    return 0;
}
