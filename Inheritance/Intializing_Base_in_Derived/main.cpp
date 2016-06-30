#include <iostream>
#include "Base.h"

using namespace std;

int main()
{
    // Create a new BaseballPlayer object
    BaseballPlayer cPlayer("Pedro Cerrano", 32, true, 0.342, 42);
	
    // Assign it a name (we can do this directly because m_strName is public)
    cPlayer.m_strName = "Joe";
	
    // Accessing Base Fuctions
    std::cout << cPlayer.GetName() << std::endl;
	std::cout << cPlayer.GetAge() << std::endl;
	std::cout << cPlayer.IsMale() << std::endl;
	
	//Accessing Variables
	cout << cPlayer.m_strName << endl;
    cout << cPlayer.m_nAge << endl;
    cout << cPlayer.m_nHomeRuns<<endl;
 	
    return 0;
}