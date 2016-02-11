#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int value;
    cin >> value;
     cout << "Value is "<< value<< endl;
    if (value== 0 || value== 1)
        cout << "You picked 0 or 1" << endl;
    else
        cout << "You did not pick 0 or 1" << endl;
    return 0;
}
