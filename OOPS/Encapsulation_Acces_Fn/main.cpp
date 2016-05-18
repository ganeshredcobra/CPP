#include <iostream>

/*
An access function is a short public function whose job is to 
retrieve or change the value of a private member variable.
*/

using namespace std;

class Date
{
private:
    int m_month;
    int m_day;
    int m_year;
 
public:
    int getMonth() { return m_month; } // getter for month
    void setMonth(int month) { m_month = month; } // setter for month
 
    int getDay() { return m_day; } // getter for day
    void setDay(int day) { m_day = day; } // setter for day
 
    int getYear() { return m_year; } // getter for year
    void setYear(int year) { m_year = year; } // setter for year
};


int main()
{
   Date Current_Date;
   Current_Date.setMonth(5);
   Current_Date.setYear(1987);
   Current_Date.setDay(25);
   cout << "Stored date is: " <<Current_Date.getDay()<<"/"<<Current_Date.getMonth()<<"/"<<Current_Date.getYear()<<endl; 
   
   return 0;
}

