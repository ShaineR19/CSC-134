// Shaine Ransford
// 2/24/2025
// M3Lab
// CSC-134

#include <iostream>
#include <string>

using namespace std;

void leftPath();
void rightPath();
void straightPath();

int main() 
{
    // Variables
    string choice; 
    string keep_going = "Yes";
  
    cout << "Welcome to the Dungeon" << endl;
    while (keep_going == "Yes")
    {
        cout << endl << "Do you want to go Left or Right?" << endl;
        cout << "Type Left, Right or Straight: "; 
        cin >> choice;

        if (choice == "Left") 
        {
            leftPath();
        }
        else if (choice == "Right") 
        {
            rightPath();
        }
        else if (choice == "Straight")
        {
            straightPath();
        }
        else 
        {
            cout << endl << "I'm sorry, that is not a valid choice." << endl;
        }

        cout << endl << "Do you want to keep going? ('Yes' to continue)";
        cin >> keep_going;
    }
    cout << endl << "Thank you for playing!" << endl;
        return 0; // tells the computer that we finished without errors
} 

void leftPath() 
{
    // this function is called in main if the user chooses "Left".
    cout << endl << "You went Left!" << endl;
    cout << "You found a Diamond!" << endl;
}

void rightPath() 
{
    // this function is called in main if the user chooses "Right".
    cout << endl << "You went Right!" << endl;
    cout << "You found a dirty Rat!" << endl;
}

void straightPath() 
{
    // this function is called in main if the user chooses "Straight".
    cout << endl << "You went Straight!" << endl;
    cout << "You found a Singing Cockroach!" << endl;
}


