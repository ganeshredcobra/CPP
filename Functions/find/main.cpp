#include <iostream>
#include <string>

int main()
{
    std::string hello = "Hello, world!";
    std::cout << "Enter a letter: ";

    char ch;
    std::cin >> ch;

    int index = hello.find(ch);
    std::cout << ch << " was found at index " << index << '\n';

    return 0;
}
