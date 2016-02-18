#include <iostream>

/* Static Variable*/

void incrementAndPrint()
{
    using namespace std;
    int value = 1; // automatic duration by default
    ++value;
    cout << value << endl;
} // value is destroyed here

void incrementAndPrintStatic()
{
    using namespace std;
    static int s_value = 1; // static duration via static keyword.  This line is only executed once.
    ++s_value;
    cout << s_value << endl;
} // s_value is not destroyed here, but becomes inaccessible

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrintStatic();
    incrementAndPrintStatic();
    incrementAndPrintStatic();
}
