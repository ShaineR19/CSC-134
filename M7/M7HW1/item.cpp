#include "Item.h"

Item::Item(std::string itemName, std::string itemType, int itemPower)
    : name(itemName), type(itemType), power(itemPower) {}

std::string Item::getName() const { return name; }
std::string Item::getType() const { return type; }
int Item::getPower() const { return power; }
