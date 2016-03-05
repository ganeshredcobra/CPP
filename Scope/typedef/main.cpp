#include <iostream>

using namespace std;

int main()
{
    typedef long miles_t;
    typedef long speed_t;

    miles_t distance = 5;
    speed_t mhz = 3200;


    cout << "distance is " << distance << endl;
    cout << "distance is " << mhz << endl;

    // The following is valid, because distance and mhz are both actually type long
    distance = mhz;

    cout << "distance is " << distance << endl;
    cout << "distance is " << mhz << endl;

    return 0;
}
