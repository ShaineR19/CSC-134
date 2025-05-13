// Shaine Ransford
// 5/13/2025
// M7HW1
// CSC-134

#include <iostream>
#include <algorithm>
#include "Player.h"
#include "Enemy.h"
#include "Item.h"

void outsideMenu(Player& player);
void insideMenu(Player& player);
void merchantMenu(Player& player);

int main() 
{
    // Create a player
    std::string playerName;
    std::cout << "Enter your character's name: ";
    std::getline(std::cin, playerName);
    std::transform(playerName.begin(), playerName.end(), playerName.begin(), ::tolower);
    Player player(playerName);

    // Start game
    std::cout << "\nWelcome to the Dungeon Divers!\n";

    bool game = true;
    while (game)
    {
        outsideMenu(player);
        insideMenu(player);
    }

    return 0;
}

void outsideMenu(Player& player)
{
    bool outside = true;
    while (outside)
    {
        std::cout << "\nYou are outside of the dungeon.\n";
        std::cout << "1. Merchant\n";
        std::cout << "2. Dungeon\n";

        std::string choice;
        std::cout << "Choose an option: ";
        std::getline(std::cin, choice);
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

        if (choice == "1" || choice == "merchant") 
        {
            merchantMenu(player);
        } 
        else if (choice == "2" || choice == "dungeon") 
        {
            std::cout << "You have chosen to go to the dungeon.\n";
            outside = false; // Exit the loop to enter the dungeon
        } 
        else 
        {
            std::cout << "Invalid choice.\n";
        }
    }
}

void merchantMenu(Player& player)
{
    bool trade = true;
    while (trade)
    {
        std::cout << "\nPiney - Welcome Adventurer!\n";
        std::cout << "Piney the Merchant:\n";
        std::cout << "1. healing potion / 20g\n";
        std::cout << "2. leave\n";
        std::cout << "\nPlayer: "<< player.getMoney()<<"g\n";

        std::cout << "Choose an option: ";
        std::string merchantChoice;
        std::getline(std::cin, merchantChoice);
        std::transform(merchantChoice.begin(), merchantChoice.end(), merchantChoice.begin(), ::tolower);

        // subtract money from player here
        if (merchantChoice == "1" || merchantChoice == "healing potion") 
        {
            player.addItem(Item("Healing Potion", "potion", 20));
            std::cout << "You bought a healing potion!\n";
        } 
        else if (merchantChoice == "2" || merchantChoice == "leave")
        {
            std::cout << "You leave the merchant\n";
            trade = false; // Exit the loop
        }
        else 
        {
            std::cout << "Invalid choice.\n";
            continue; // Skip to the next iteration
        }
    }
}

void insideMenu(Player& player)
{
    bool inside = true;
    while (inside) 
    {
        // Display Menu
        std::cout << "\nDungeon Menu:";
        std::cout << "\n1. explore";
        std::cout << "\n2. inventory";
        std::cout << "\n3. leave";
        std::cout << "\nChoose an option: ";

        // Get user input
        std::string dungeonChoice;
        std::getline(std::cin, dungeonChoice);
        std::transform(dungeonChoice.begin(), dungeonChoice.end(), dungeonChoice.begin(), ::tolower);

        // Check user Input
        if (dungeonChoice == "1" || dungeonChoice == "explore")
        {
            // Create Enemies
            Enemy goblin("Goblin", 30, 8, 2);
            
            std::cout << "\nA wild " << goblin.getType() << " appears!\n";
            std::cout << R"(
      ,      ,
     /(.-""-.)\
|\   \/      \/  /|
| \  / =.  .= \ / |
 \(  \  o\/o  / )/
  \_, '-/  \-' ,_/
    /   \__/   \
    \ \__/\__/ /
  ___\ \|--|/ /___
/`    \      /    `\
)";
            while (player.isAlive() && goblin.isAlive()) 
            {
                std::cout << "\n-- Player Turn --\n";
                player.displayStats();
                std::cout <<"\n"<< goblin.getType() << " HP: " << goblin.getHealth() << "\n";

                std::string choice;
                std::cout << "\nBattle Menu:";
                std::cout << "\n1. attack";
                std::cout << "\n2. potion";
                std::cout << "\nChoose an action: ";
                std::getline(std::cin, choice);
                std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

                if (choice == "1" || choice == "attack") 
                {
                    goblin.takeDamage(player.getAttack());
                } 
                else if (choice == "2" || choice == "potion") 
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
                inside = false; // Exit the loop
            }
        } 
        else if (dungeonChoice == "2" || dungeonChoice == "inventory") 
        {
            std::cout << "\nYour Inventory:\n";
            player.displayStats();
            continue; // Skip to the next iteration
        } 
        else if (dungeonChoice == "3" || dungeonChoice == "leave") 
        {
            std::cout << "\nYou exit the dungeon.\n";
            inside = false; // Exit the dungeon loop
        } 
        else 
        {
            std::cout << "Invalid choice.\n";
            continue; // Skip to the next iteration  
        }
    }
    return;
}