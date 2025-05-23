#include "Player.h"
#include <iostream>

Player::Player(std::string playerName) 
{
    name = playerName;
    maxHealth = 50;
    health = maxHealth;
    attack = 10;
    defense = 4;
    money = 100;
}

std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getAttack() const { return attack; }
int Player::getDefense() const { return defense; }
int Player::getMoney() const { return money; }

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

bool Player::isAlive() const 
{
    return health > 0;
}

void Player::addItem(const Item& item) 
{
    inventory.push_back(item);
    //std::cout << name << " found: " << item.getName() << "\n";
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
    std::cout << "Money: " << money << "g\n";
}

void Player::kill() 
{
    health = 0; // Used to end the game
}

void Player::subtractMoney(int amount) 
{
    if (amount > money) 
    {
        std::cout << "Not enough money!\n";
    } 
    else 
    {
        money -= amount;
        std::cout << name << " spent " << amount << "g.\n";
    }
}

void Player::addMoney(int amount) 
{
    money += amount;
    std::cout << "You received " << amount << "g.\n";
}

void  Player::getInventory() const 
{
    int count = 1;
    for (const auto& item : inventory) 
    {
        std::cout << count++ << " - " << item.getName() << "\n";
    }
}