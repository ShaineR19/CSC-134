// Shaine Ransford
// 5/13/2025
// M7HW1
// CSC-134

#include <iostream>
#include <algorithm>
#include "Player.h"
#include "Enemy.h"
#include "Item.h"

int main() 
{
    // Create a player
    std::string playerName;
    std::cout << "Enter your character's name: ";
    std::getline(std::cin, playerName);
    std::transform(playerName.begin(), playerName.end(), playerName.begin(), ::tolower);
    Player player(playerName);

    std::cout << "Welcome to the Dungeon Divers!\n";
    std::cout << "You are outside of the dungeon, would you like to go to the merchant or go straight to the dungeon\n";

    // Enemy types
    Enemy goblin("Goblin", 30, 8, 2);

    Item potion("Healing Potion", "potion", 20);
    player.addItem(potion);

    std::cout << "\nA wild " << goblin.getType() << " appears!\n";

    while (player.isAlive() && goblin.isAlive()) 
    {
        std::cout << "\n-- Player Turn --\n";
        player.displayStats();
        std::cout <<"\n"<< goblin.getType() << " HP: " << goblin.getHealth() << "\n";

        std::string choice;
        std::cout << "\nChoose action: (attack / potion): ";
        std::cin >> choice;
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

        if (choice == "attack") 
        {
            goblin.takeDamage(player.getAttack());
        } 
        else if (choice == "potion") 
        {
            std::cin.ignore(); // flush newline from previous input
            std::string itemName;
            std::cout << "Enter item name to use: ";
            std::getline(std::cin, itemName);
            player.useItem(itemName);
        }

        if (!goblin.isAlive()) break;

        std::cout << "\n-- Enemy Turn --\n";
        player.takeDamage(goblin.getAttack());
    }

    if (player.isAlive()) 
    {
        std::cout << "\nYou defeated the " << goblin.getType() << "!\n";
    } 
    else 
    {
        std::cout << "\nYou were defeated in battle...\n";
    }

    return 0;
}
