#include "Player.h"
#include <iostream>

Player::Player(std::string playerName) 
{
    name = playerName;
    maxHealth = 100;
    health = maxHealth;
    attack = 10;
    defense = 5;
}

std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getAttack() const { return attack; }
int Player::getDefense() const { return defense; }

void Player::takeDamage(int amount) 
{
    int damage = amount - defense;
    if (damage < 0) damage = 0;
    health -= damage;
    std::cout << name << " takes " << damage << " damage!\n";
}

void Player::heal(int amount) 
{
    health += amount;
    if (health > maxHealth) health = maxHealth;
    std::cout << name << " heals for " << amount << " HP.\n";
}

bool Player::isAlive() const {
    return health > 0;
}

void Player::addItem(const Item& item) {
    inventory.push_back(item);
    std::cout << name << " found: " << item.getName() << "\n";
}

void Player::useItem(std::string itemName)
 {
    for (size_t i = 0; i < inventory.size(); ++i) 
    {
        if (inventory[i].getName() == itemName && inventory[i].getType() == "potion") 
        {
            heal(inventory[i].getPower());
            inventory.erase(inventory.begin() + i);
            return;
        }
    }
    std::cout << "No usable item found.\n";
}

void Player::displayStats() const 
{
    std::cout << "== " << name << " ==\n";
    std::cout << "HP: " << health << "/" << maxHealth << "\n";
    std::cout << "ATK: " << attack << " | DEF: " << defense << "\n";
}
