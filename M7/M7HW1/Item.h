#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;
    std::string type; // "potion", "weapon", "armor"
    int power;

public:
    Item(std::string itemName, std::string itemType, int itemPower);

    std::string getName() const;
    std::string getType() const;
    int getPower() const;
};

#endif
