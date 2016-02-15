#include <iostream>
/*Bit Mask*/

int main()
{
    const unsigned int lowMask = 0xF; // bit mask to keep low 4 bits (hex for 0000 0000 0000 1111)

    std::cout << "Enter an integer: ";
    int num=0xBF;
    //std::cin >> num;

    num &= lowMask; // remove the high bits to leave only the low bits

    std::cout << "The 4 low bits have value: " << num<< '\n';

    return 0;
}
