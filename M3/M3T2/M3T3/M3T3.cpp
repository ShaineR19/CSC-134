// Shaine Ransford
// 2/24/2025
// M3Lab
// CSC-134

#include <iostream>
#include <string>

using namespace std;

int roll();

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

        

        cout << endl << "Do you want to keep going? ('Yes' to continue)";
        cin >> keep_going;
    }
    cout << endl << "Thank you for playing!" << endl;
        return 0; // tells the computer that we finished without errors
} 