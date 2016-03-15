#include <iostream>

using namespace std;

/* Switch case example */

enum Colors
{
    COLOR_BLACK,
    COLOR_WHITE,
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE
};

void printColor(int num)
{
    switch (num)
    {
        case COLOR_BLACK:
            std::cout << "Black";
            break;
        case COLOR_WHITE:
            std::cout << "White";
            break;
        case COLOR_RED:
            std::cout << "Red";
            break;
        case COLOR_GREEN:
            std::cout << "Green";
            break;
        case COLOR_BLUE:
            std::cout << "Blue";
            break;
        default:
            std::cout << "Unknown";
            break;
    }
}

int main()
{
	int i=0;

	for(i=0; i<7; i++)
	{
		printColor(i);
		std::cout << endl;
	}

	return 0;
}
