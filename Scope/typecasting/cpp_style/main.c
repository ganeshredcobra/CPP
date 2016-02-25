#include <iostream>
using namespace std;

/* static_cast casts */

int main()
{
    int i1 = 10;
    int i2 = 4;
    int i = 48;
    float f = static_cast<float>(i1) / i2;
    char ch = static_cast<char>(i);

    cout<<"Typecasted Float value is:"<<f<<endl;
    cout<<"Typecasted char value is:"<<ch<<endl;
    return 0;
}