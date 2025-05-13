#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "item.h"

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attack;
    int defense;
    std::vector<Item> inventory;

public:
    Player(std::string playerName);

    // Getters
    std::string getName() const;
    int getHealth() const;
    int getAttack() const;
    int getDefense() const;

    // Core methods
    void takeDamage(int amount);
    void heal(int amount);
    bool isAlive() const;

    void addItem(const Item& item);
    void useItem(std::string itemName);

    void displayStats() const;
};

#endif
