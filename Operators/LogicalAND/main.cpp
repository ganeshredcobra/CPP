#include <iostream>

using namespace std;

int main()
{
   cout << "Enter a number: ";
    int value=11;
    cin >> value ;

    if (value > 10 && value < 20)
        cout << "Your value is between 10 and 20" << endl;
    else
        cout << "Your value is not between 10 and 20" << endl;
    return 0;
}
