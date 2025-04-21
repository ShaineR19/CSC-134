// Shaine Ransford
// 4/21/2025
// M6T1
// CSC-134

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    cout << "Hello Player! Welcome to Buckshot Roulette.\n";
    cout << "You wil be going against the dealer.\n";

    // Load the shotgun with random shells (1 for loaded, 0 for empty)
    cout << "\nLoading Shotgun...\n";
    const int SHOTGUNMAX = 6;
    int shells[SHOTGUNMAX];
    for (int i = 0; i < SHOTGUNMAX - 1; i++)
    {
        int load = rand() % 2;
        cout << load << endl;
        shells[i] = load;
    }
    cout << "Shotgun Loaded\n";

    // Start with the first chamber, round 1, and all targets empty
    int chamberIndex = 0;
    int roundNum = 1;
    int targetHits[3] = {0, 0, 0}; // Array to keep track of hits on each target

    // Game loop
    // The game continues until all chambers are used
    while (chamberIndex < SHOTGUNMAX)
    {
        // Player turn, they choose a target to shoot at
        int target;
        cout << "\nRound "<< roundNum << endl;
        cout << "Choose a target to shoot (1-3): ";
        cin >> target;
        // Validate target input
        if (target < 1 || target > 3)
        {
            cout << "Invalid target. Please choose a number between 1 and 3.\n";
            continue;
        }
        // Check if the chamber is empty or loaded
        cout << "You shot at target " << target << ".\n";
        if (shells[chamberIndex] == 1)
        {
            cout << "You hit the target!\n";
            targetHits[target - 1]++; // Increment the hit count for the chosen target
            if (targetHits[target -1] == 2)
            {
                cout << "You have hit target " << target << " twice! You lose :(\n";
                return 0; // End the game if a target is hit three times
            }
        }
        else
        {
            cout << "You missed the target!\n";
        }
        chamberIndex++;

        // Dealer turn, they choose a target to shoot at
        cout << "Dealers turn.\n";
        int dealerTarget = rand() % 3 + 1;
        // Check if the chamber is empty or loaded
        cout << "Dealer shot at target " << dealerTarget << ".\n";
        if (shells[chamberIndex] == 1)
        {
            cout << "Dealer hit the target!\n";
            targetHits[dealerTarget - 1]++; // Increment the hit count for the chosen target
            if (targetHits[dealerTarget -1] == 2)
            {
                cout << "Dealer hit target " << target << " twice! You Win :)\n";
                return 0; // End the game if a target is hit three times
            }
        }
        else
        {
            cout << "Dealer missed the target!\n";
        }
        chamberIndex++;
        roundNum++;
    }
    return 0;
}
