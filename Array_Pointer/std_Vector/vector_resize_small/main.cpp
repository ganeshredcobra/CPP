#include <vector>
#include <iostream>

int main()
{
    std::vector<int> array { 0, 1, 2, 3, 4 };

    for (auto const &element: array)
        std::cout << element << ' ';
    std::cout <<'\n';
    array.resize(3); // set size to 3

    std::cout << "The size is: " << array.size() << '\n';

    for (auto const &element: array)
        std::cout << element << ' ';

    return 0;
};
