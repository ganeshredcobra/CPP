#include <iostream>
#include <string>

using namespace std;
 
class Employee
{
private:
    int m_id;
    std::string m_name;
 
public:
    Employee(int id, std::string name):
        m_id(id), m_name(name)
    {
    }
    void print()
	{
		std::cout << "m_id: " << m_id << ", m_name: " << m_name << '\n';
	}
 
    // All three of the following constructors use delegating constructors to minimize redundant code
    Employee() : Employee(0, "") { }
    Employee(int id) : Employee(id, "") { }
    Employee(std::string name) : Employee(0, name) { }
};


int main()
{
   Employee First;
   First.print(); 
   Employee Second(5);
   Second.print();
   Employee Third("Hello");
   Third.print();
   
   return 0;
}

