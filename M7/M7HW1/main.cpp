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
        std::cout << "\nYou are outside of the dungeon, would you like to go to the merchant or go straight to the dungeon\n";
        std::string choice;
        std::cout << "Enter 'merchant' or 'dungeon': ";
        std::getline(std::cin, choice);
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        if (choice == "merchant") 
        {
            merchantMenu(player);
        } 
        else if (choice == "dungeon") 
        {
            std::cout << "You have chosen to go straight to the dungeon.\n";
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
        std::cout << "1. Healing Potion / 20g\n";
        std::cout << "You have "<< player.getMoney()<<" gold.\n";
        std::cout << "Would you like to buy the potion? (yes/no): ";
        std::string buyChoice;
        std::getline(std::cin, buyChoice);
        std::transform(buyChoice.begin(), buyChoice.end(), buyChoice.begin(), ::tolower);
        if (buyChoice == "yes") 
        {
            player.addItem(Item("Healing Potion", "potion", 20));
            std::cout << "You bought a healing potion!\n";
        } 
        else 
        {
            std::cout << "You chose not to buy the potion.\n";
        }
    }
}

void insideMenu(Player& player)
{
    bool inside = true;
    while (inside) 
    {
        // Display Menu
        std::cout << "\nYou are in the dungeon.";
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