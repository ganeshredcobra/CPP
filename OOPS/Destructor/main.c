#include <iostream>

using namespace std;
/*
1) The destructor must have the same name as the class, preceded by a tilde (~).
2) The destructor can not take arguments.
3) The destructor has no return type.
*/
 
class MyString
{
private:
	char *m_string = 0;
	int m_length = 0;
 
public:
	MyString(const char *string = "") // constructor
	{
                // If string is a null pointer, treat as empty string
		if (string == 0)
			string = ""; // "" is a C-style string literal
 
		// Figure out how long string is, and set m_length to this value
		m_length = 0;
		while (string[m_length] != '\0')
			++m_length;
 
		++m_length; // add one to account for terminator
 
		// Allocate memory equal to this length
		m_string = new char[m_length];
 
		// Copy the parameter into the memory we just allocated
		for (int index = 0; index < m_length; ++index)
			m_string[index] = string[index];
	}
 
	~MyString() // destructor
	{
		// Dynamically delete the string we allocated earlier
		delete[] m_string;
	}
 
	char* getString() { return m_string; }
	int getLength() { return m_length; }
};
 
int main()
{
    MyString myName("Hello");
    std::cout << "My name is: " << myName.getString() << '\n';
 
    return 0;
} // myName is destroyed here, so the ~MyString() destructor function is called here
