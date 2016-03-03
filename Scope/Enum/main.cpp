#include <iostream>
#include <string>

/* Enum example */

using namespace std;

enum ItemType
{
    ITEMTYPE_SWORD,
    ITEMTYPE_TORCH,
    ITEMTYPE_POTION
};

std::string getItemName(ItemType itemType)
{
    if (itemType == ITEMTYPE_SWORD)
        return std::string("Sword");
    if (itemType == ITEMTYPE_TORCH)
        return std::string("Torch");
    if (itemType == ITEMTYPE_POTION)
        return std::string("Potion");
}

int main()
{
    // ItemType is the enumerated type we've declared above.
    // itemType (lower case i) is the name of the variable we're defining (of type ItemType).
    // ITEMTYPE_TORCH is the enumerated value we're initializing variable itemType with.
    ItemType itemType(ITEMTYPE_TORCH);

    std::cout << "You are carrying a " << getItemName(itemType) << "\n";

    return 0;
}
