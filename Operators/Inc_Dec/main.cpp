#include <iostream>

using namespace std;

int main()
{
    int x = 5, y = 5;
    cout << x << " " << y << endl;
    cout << ++x << " " << --y << endl; // prefix
    cout << x << " " << y << endl;
    cout << x++ << " " << y-- << endl; // postfix
    cout << x << " " << y << endl;
    return 0;
}
