#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Item.h"

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attack;
    int defense;
    int money;
    std::vector<Item> inventory;

public:
    Player(std::string playerName);

    // Getters
    std::string getName() const;
    int getHealth() const;
    int getAttack() const;
    int getDefense() const;
    int getMoney() const;

    // Core methods
    void takeDamage(int amount);
    void heal(int amount);
    bool isAlive() const;

    void addMoney(int amount);
    void subtractMoney(int amount);
    void getInventory() const;
    void addItem(const Item& item);
    void useItem(std::string itemName);

    void displayStats() const;
    void kill();
};

#endif
