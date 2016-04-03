#include <iostream>

/*
Although “string” only has 6 letters, C++ automatically adds a null terminator to the end of the string.
Consequently, mystring is actually an array of length 7!
*/

int main()
{
    char mystring[] = "string";
    std::cout << mystring << " has " << sizeof(mystring) << " characters.\n";
    for (int index = 0; index < sizeof(mystring); ++index)
        std::cout << static_cast<int>(mystring[index]) << " ";

    return 0;
}
