// Shaine Ransford
// 2/24/2025
// M3Lab
// CSC-134

#include <iostream>
#include <string>

using namespace std;

void leftPath();
void rightPath();

int main() 
{
    // Variables
    string choice; 

    // Input
    cout << "Welcome to the Dungeon" << endl;
    cout << "Do you want to go Left or Right?" << endl;
    cout << "Type Left or Right: "; 
    cin >> choice;
  
    if (choice == "Left") 
    {
        leftPath();
    }
    else if (choice == "Right") 
    {
        rightPath();
    }
    else 
    {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }

    cout << endl << "Thank you for playing!" << endl;
    return 0; // tells the computer that we finished without errors
} 

void leftPath() 
{
    // this function is called in main if the user chooses 1.
    cout << endl << "You went Left" << endl;
    cout << "You found a Diamond!" << endl;
}

void rightPath() 
{
    // this function is called in main if the user chooses 'right.
    cout << endl << "You went Right" << endl;
    cout << "You found a dirty Rat!" << endl;
}


