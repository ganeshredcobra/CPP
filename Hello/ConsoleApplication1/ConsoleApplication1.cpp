#include "stdafx.h"
#include <iostream>

int main()
{
	int x = 4;
	std::cout << "Hello world!" << std::endl;
	std::cout << "First check" << std::endl;
	std::cout << "The value of X is " << x << std::endl;
	std::cout << "Enter a number : ";
	std::cin >> x;
	std::cout << "The number you entered is " << x << std::endl;
	return 0;
}