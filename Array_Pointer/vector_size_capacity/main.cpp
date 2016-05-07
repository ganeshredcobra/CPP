#include <vector>
#include <iostream>

int main()
{
    std::vector<int> array { 0, 1, 2 };
    array.resize(5); // set size to 5

    for (auto const &element: array)
        std::cout << element << ' ';

    std::cout << "The size is: " << array.size() << '\n';
    std::cout << "The capacity is: " << array.capacity() << '\n';
}
