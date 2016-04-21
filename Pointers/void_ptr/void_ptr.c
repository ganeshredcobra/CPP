#include <iostream>

/* g++ -std=c++11 -o main *.cpp */
/*
void pointer does not know what type of object it is pointing to, it cannot be dereferenced directly
*/
 
enum Type
{
    INT,
    FLOAT,
    CSTRING,
};
 
void printValue(void *ptr, Type type)
{
    switch (type)
    {
        case INT:
            std::cout << *static_cast<int*>(ptr) << '\n'; // cast to int pointer and dereference
            break;
        case FLOAT:
            std::cout << *static_cast<float*>(ptr) << '\n'; // cast to float pointer and dereference
            break;
        case CSTRING:
            std::cout << static_cast<char*>(ptr) << '\n'; // cast to char pointer and dereference
            break;
    }
}
 
int main()
{
    int nValue = 5;
    float fValue = 7.5;
    char szValue[] = "Mollie";
 
    printValue(&nValue, INT);
    printValue(&fValue, FLOAT);
    printValue(szValue, CSTRING);
 
    return 0;
}
