#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Item.h"

int main() {
    Player player("Artemis");
    Enemy goblin("Goblin", 30, 8, 2);

    Item potion("Healing Potion", "potion", 20);
    player.addItem(potion);

    std::cout << "\nA wild " << goblin.getType() << " appears!\n";

    while (player.isAlive() && goblin.isAlive()) {
        std::cout << "\n-- Player Turn --\n";
        player.displayStats();

        std::string choice;
        std::cout << "Choose action: (attack / use potion): ";
        std::cin >> choice;

        if (choice == "attack") {
            goblin.takeDamage(player.getAttack());
        } else if (choice == "use") {
            std::string itemName;
            std::cin.ignore();
            std::getline(std::cin, itemName);
            player.useItem(itemName);
        }

        if (!goblin.isAlive()) break;

        std::cout << "\n-- Enemy Turn --\n";
        player.takeDamage(goblin.getAttack());
    }

    if (player.isAlive()) {
        std::cout << "\nYou defeated the " << goblin.getType() << "!\n";
    } else {
        std::cout << "\nYou were defeated in battle...\n";
    }

    return 0;
}
