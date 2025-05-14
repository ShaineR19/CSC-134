#include "Enemy.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Enemy::Enemy(std::string enemyType, int hp, int atk, int def)
    : type(enemyType), health(hp), attack(atk), defense(def) {}

std::string Enemy::getType() const { return type; }
int Enemy::getHealth() const { return health; }
int Enemy::getAttack() const { return attack; }
int Enemy::getDefense() const { return defense; }

void Enemy::takeDamage(int amount) 
{
    int damage = amount - defense;
    if (damage < 0) damage = 0;
    health -= damage;
    std::cout << type << " takes " << damage << " damage!\n";
}

bool Enemy::isAlive() const 
{
    return health > 0;
}

Enemy getRandomEnemy()
{
    int r = rand() % 3;
    switch (r) 
    {
        case 0: return Enemy("Goblin", 20, 5, 15);
        case 1: return Enemy("Skeleton", 20, 10, 10);
        case 2: return Enemy("Bunny", 20, 20, 5);
        default: return Enemy("Goblin", 30, 5, 4); // Fallback case
    }
}
