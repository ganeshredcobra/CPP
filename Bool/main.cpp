#include <iostream>

using namespace std;

int main()
{
    bool b(true);
    cout << " b is :"<< b << endl;
    cout << "!b is :"<< !b << endl;

    bool b2(false);
    cout << " b2 is :"<< b2 << endl;
    cout << "!b2 is :"<< !b2 << endl;

    /*If you want to cout as true or false the use std::boolalpha*/
    cout << boolalpha;
    cout << true << endl;
    cout << false << endl;

    return 0;
}
