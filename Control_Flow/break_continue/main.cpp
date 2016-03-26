#include <iostream>

int main()
{
    int count(0); // count how many times the loop iterates
    bool exitLoop(false); // controls whether the loop ends or not
    while (!exitLoop)
    {
        std::cout << "Enter 'e' to exit this loop or any other key to continue: ";
        char ch;
        std::cin >> ch;

        if (ch == 'e')
            exitLoop = true;
        else
        {
            ++count;
            std::cout << "We've iterated " << count << " times\n";
        }
    }

    return 0;
}
