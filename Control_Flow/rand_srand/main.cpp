#include <iostream>
#include <cstdlib> // for rand() and srand()

int main()
{
    srand(5323); // set initial seed value to 5323

    // Print 100 random numbers
    for (int count=0; count < 100; ++count)
    {
        std::cout << rand() << "\t";

        // If we've printed 5 numbers, start a new row
        if ((count+1) % 5 == 0)
            std::cout << "\n";
	}
}
