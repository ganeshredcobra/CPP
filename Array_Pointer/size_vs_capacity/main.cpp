#include <iostream>
#include <vector>

/*
we assigned a smaller array to our vector, it did not reallocate its memory (the capacity is still 5).
It simply changed its size, so it knows that only the first 3 elements are valid at this time.
*/

using namespace std;


int main()
{
    std::vector<int> array;
    array = { 0, 1, 2, 3, 4 }; // okay, array length = 5
    std::cout << "size: " << array.size() << "  capacity: " << array.capacity() << '\n';

    array = { 9, 8, 7 }; // okay, array length is now 3!
    std::cout << "size: " << array.size() << "  capacity: " << array.capacity() << '\n';

    return 0;
}
