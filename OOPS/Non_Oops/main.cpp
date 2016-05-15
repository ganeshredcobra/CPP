#include <iostream>

struct DateStruct
{
    int month;
    int day;
    int year;
};

void print(DateStruct &date)
{
    std::cout << date.month << "/" << date.day << "/" << date.year;
}

int main()
{
    DateStruct today { 10, 14, 2020 }; // use uniform initialization

    today.day = 16; // use member selection operator to select a member of the struct
    print(today);

    return 0;
}
