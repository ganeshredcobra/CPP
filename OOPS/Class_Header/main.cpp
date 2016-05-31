#include <iostream>
#include "Date.h"

/* g++ -std=c++11 -o main *.cpp */

using namespace std;

// Date constructor
Date::Date(int year, int month, int day)
{
    SetDate(year, month, day);
}
 
// Date member function
void Date::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}

int main()
{
    std::cout << "Set the Month: ";
    int month;
    std::cin >> month;
 
    std::cout << "Set the day: ";
    int day;
    std::cin >> day;
 
    std::cout << "Set the year: ";
    int year;
    std::cin >> year;
    
   Date D(year, month, day);
   std::cout << "The Date is: " << D.getMonth() << "/" << D.getDay() << "/" << D.getYear() << "\n";
     
   return 0;
}

