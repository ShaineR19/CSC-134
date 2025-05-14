// Shaine Ransford
// 5/13/2025
// M7HW1
// CSC-134
// This program is a simple text-based RPG game where the player can explore a dungeon, fight enemies, 
// and interact with a merchant to buy items. The player can also manage their inventory and use items during battles. 
// The game includes basic combat mechanics and allows the player to heal using potions. 
// The code is structured into multiple classes for better organization and readability.

// Libraries
#include <iostream>
#include <algorithm>
// Objects
#include "Player.h"
#include "Enemy.h"
#include "Item.h"
// Menu Functions
void outsideMenu(Player& player);
void insideMenu(Player& player);
void merchantMenu(Player& player);
void battleMenu(Player& player, Enemy& enemy);
// Enemy Functions
Enemy getRandomEnemy();
void goblinArt();
void skeletonArt();
void bunnyArt();

// Main function
int main() 
{
    srand(time(0)); // Seed for random number generation

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
        if (!player.isAlive()) 
        {
            std::cout << "\nYou have the left the treasure and riches in the dungeon...\n";
            game = false; // Exit the game loop
        }
    }
    std::cout << "\nThank you for playing!\n";
    return 0;
}

void outsideMenu(Player& player)
{
    bool outside = true;
    while (outside)
    {
        if (!player.isAlive()) 
        {
            outside = false;
            break; // Exit the loop
        }
        // Display Menu
        std::cout << "\nYou are outside of the dungeon.\n";
        std::cout << "1. Merchant\n";
        std::cout << "2. Dungeon\n";
        std::cout << "3. Leave\n";
        // Get user input
        std::string choice;
        std::cout << "Choose an option: ";
        std::getline(std::cin, choice);
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        // Check user Input
        if (choice == "1" || choice == "merchant") 
        {
            merchantMenu(player);
        } 
        else if (choice == "2" || choice == "dungeon") 
        {
            std::cout << "You have chosen to go to the dungeon.\n";
            insideMenu(player);
        } 
        else if (choice == "3" || choice == "leave") 
        {
            player.kill(); // Simulate game over
            outside = false; // Exit the loop
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
            if (player.getMoney() >= 20) 
            {
                player.addItem(Item("Healing Potion", "potion", 20));
                player.subtractMoney(20);
                std::cout << "You bought a healing potion!\n";
            }
            else if (player.getMoney() < 20) 
            {
                std::cout << "You don't have enough money!\n";
                continue; // Skip to the next iteration
            }
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
            // Create Enemy
            Enemy enemy = getRandomEnemy();
            // Start Battle
            battleMenu(player, enemy);
            // Check if player is alive after battle
            if (player.isAlive()) 
            {
                std::cout << "\nYou defeated the " << enemy.getType() << "!\n";
            } 
            else 
            {
                std::cout << "\nYou were defeated in battle...\n";
                inside = false; // Exit the loop
            }
        } 
        else if (dungeonChoice == "2" || dungeonChoice == "inventory") 
        {
            // Display Player stats
            std::cout << "\nYour Inventory:\n";
            player.displayStats();
            // Display items
            std::cout << "\nItems:\n";
            player.getInventory();
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

// Function to handle battle menu
void battleMenu(Player& player, Enemy& enemy)
{
    while (player.isAlive() && enemy.isAlive()) 
    {
        // Display Player stats and enemy health
        std::cout << "\n-- Player Turn --\n";
        player.displayStats();
        std::cout <<"\n"<< enemy.getType() << " HP: " << enemy.getHealth() << "\n";
        // Display Menu
        std::string choice;
        std::cout << "\nBattle Menu:";
        std::cout << "\n1. attack";
        std::cout << "\n2. healing potion";
        std::cout << "\nChoose an action: ";
        // Get user input
        std::getline(std::cin, choice);
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        // Check user Input
        if (choice == "1" || choice == "attack") 
        {
            enemy.takeDamage(player.getAttack());
        } 
        else if (choice == "2" || choice == "healing potion") 
        {
            std::string itemName = "Healing Potion"; // Assuming the player has a healing potion
            player.useItem(itemName);
        }
        else 
        {
            std::cout << "Invalid choice.\n";
        }
        if (!enemy.isAlive()) 
        {
            player.addMoney(20);
            break;
        }
        std::cout << "\n-- Enemy Turn --\n";
        player.takeDamage(enemy.getAttack());
    }
}

Enemy getRandomEnemy()
{
    int r = rand() % 3;
    switch (r) 
    {
        case 0:
            goblinArt();
            std::cout << "\nA wild Goblin appears!\n";
            return Enemy("Goblin", 20, 5, 6);
        case 1:
            skeletonArt();
            std::cout << "\nA wild Skeleton appears!\n";
            return Enemy("Skeleton", 20, 10, 4);
        case 2:
            bunnyArt();
            std::cout << "\nA wild Bunny appears!\n";
            return Enemy("Bunny", 20, 20, 2);
        default:
            std::cout << "\nA wild Goblin appears\n";
            return Enemy("Goblin", 20, 5, 6); // Default enemy
    }
}

void goblinArt()
{
std::cout << R"(
      ,      ,
     /(.-""-.)\
|\   \/      \/   /|
| \  / =.  .= \  / |
 \ ( \  o\/o  / ) /
  \_, '-/  \-' ,_/
    /   \__/   \
    \ \__/\__/ /
  ___\ \|--|/ /___
/`    \      /    `\
)";
}

void skeletonArt()
{
std::cout << R"(
     .-.
    (o.o)
     |=|
    __|__
  //.=|=.\\
 // .=|=. \\
 \\ .=|=. //
  \\(_=_)//
   (:| |:)
    || ||
    () ()
    || ||
    || ||
   ==' '==
)";
}

void bunnyArt()
{
std::cout << R"(
(/(/
(-.-)
 o_(")(")
)";
}