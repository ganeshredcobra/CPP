#include <iostream>

/* Nested Struct */

struct Employee
{
    short id;
    int age;
    float wage;
};

struct Company
{
    Employee CEO; // Employee is a struct within the Company struct
    int numberOfEmployees;
};



void printInformation(Company myCompany)
{
    std::cout << "ID:   " << myCompany.CEO.id << "\n";
    std::cout << "Age:  " << myCompany.CEO.age << "\n";
    std::cout << "Wage: " << myCompany.CEO.wage << "\n";
	std::cout << "numberOfEmployees: " << myCompany.numberOfEmployees << "\n";
}

int main()
{
    Company myCompany = {{ 1, 42, 60000.0f }, 5 };

    // Print Joe's information
    printInformation(myCompany);

    std::cout << "\n";

    // Print Frank's information
   // printInformation(frank);

    return 0;
}
