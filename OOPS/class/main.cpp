#include <iostream>

class DateClass
{
public:
    int m_month;
    int m_day;
    int m_year;

    void print()
    {
        std::cout << m_month << "/" << m_day << "/" << m_year;
    }
};

int main()
{
    DateClass today { 10, 14, 2020 };

    today.m_day = 16; // use member selection operator to select a member variable of the class
    today.print(); // use member selection operator to select a member function of the class

    return 0;
}
