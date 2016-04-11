#include <iostream>

/*
7C + 4 = 80 in hexadecimal
*/

int main()
{
    int value = 7;
    int *ptr = &value;

    std::cout << ptr <<" Value is :" <<*ptr <<'\n';
    std::cout << ptr+1 <<" Value is :" << *ptr+1 <<'\n';
    std::cout << ptr+2 <<" Value is :" <<*ptr+2 << '\n';
    std::cout << ptr+3 << " Value is :" <<*ptr+3 <<'\n';

    return 0;
}
