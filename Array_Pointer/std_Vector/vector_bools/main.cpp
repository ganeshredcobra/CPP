#include <vector>
#include <iostream>

int main()
{
    std::vector<bool> array { true, false, false, true, true };
    std::cout << "The size is: " << array.size() << '\n';

    for (auto const &element: array)
        std::cout << element << ' ';

    return 0;
};
