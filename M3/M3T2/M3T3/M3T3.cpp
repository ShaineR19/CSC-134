// Shaine Ransford
// 2/24/2025
// M3T3
// CSC-134
// RNG Game

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int roll();

int main() 
{   
    // Variables
    int seed = time(0);
    int total;
    srand(seed);

    // Roll Dice
    int roll1 = roll();
    int roll2 = roll(); 
    total = roll1 + roll2;

    // Output
    cout << "Let's roll some dice!" << endl;
    cout << endl << "You rolled " << roll1 << " and "<< roll2 << endl;
    cout << "Point Total: " << total << endl;
    cout << "" << endl;

    // Let's play craps! Results*
    if (total == 7 || total == 11) 
    {   // roll is 7 or 11
        cout << "Winner Winner Chicken Dinner!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12) 
    {   // roll is 2, 3, or 12
        cout << "Snake eyes! Too bad, you lose." << endl;
    }
    else 
    {   // roll is anything else
        cout << "Your point is " << total << " but we'll do that part later" << endl;
    }

    return 0;
}

int roll()
{
    return (rand() % 6) + 1;    
}