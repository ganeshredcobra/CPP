#include <iostream>

using namespace std;

class IDGenerator
{
private:
    static int s_nextID;
 
public:
     static int getNextID();
};
 
// We'll start generating IDs at 1
int IDGenerator::s_nextID = 1;
 
// Here's the definition of getNextID() outside of the class.  Note we don't need to use the static keyword here.
int IDGenerator::getNextID() { return s_nextID++; } 
 
int main()
{
    for (int count=0; count < 5; ++count)
        cout << "The next ID is: " << IDGenerator::getNextID() << '\n';
 
    return 0;
}