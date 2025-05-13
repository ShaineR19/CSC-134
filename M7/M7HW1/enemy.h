#ifndef ENEMY_H
#define ENEMY_H

#include <string>

class Enemy {
private:
    std::string type;
    int health;
    int attack;
    int defense;

public:
    Enemy(std::string type, int hp, int atk, int def);

    std::string getType() const;
    int getHealth() const;
    int getAttack() const;
    int getDefense() const;

    void takeDamage(int amount);
    bool isAlive() const;
};

#endif
