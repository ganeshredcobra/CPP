#include <iostream>

using namespace std;

int pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}

int main()
{
    double x = pow(3.0, 4.0); // 3 to the 4th power
    cout<<"The value os X is: "<<x <<endl;
    return 0;
}
