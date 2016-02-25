#include <iostream>
using namespace std;

/* C-style casts */

int main()
{
    int i1 = 10;
    int i2 = 4;
    float f = (float)i1 / i2;

    cout<<"Typecasted Float value is:"<<f<<endl;
    return 0;
}