#include <iostream>

/*
Function overloading is a feature of C++ that allows us to create multiple functions with the same name,
so long as they have different parameters.
*/

using namespace std;

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    int Res;
    double Reslt,Sucess;
    Res = add(2,3);
    Reslt = add(2.5,3.6);
    cout << "Result of int add is: "<<Res<< endl;
    cout << "Result of double add is: "<<Reslt<< endl;

    return 0;
}
