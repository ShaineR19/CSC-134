// Shaine Ransford
// 2/24/2025
// M4T1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    cout << "Program 5.3\n" << endl;
    // This program demonstrate a simple while loop
    int number = 0;
    while (number < 5 )
    {
        cout << "Hello\n";
        number++;
    }
    cout << "Thats's all!\n";
    
    cout << "\n------------------------------------------------------\n";

    cout << "\nProgram 5.6\n";
    // This program displays a list of numbers and their squares.
    const int MIN_NUMBER = 1,
              MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "\nNumber Number Squared\n";
    cout << "------------------------\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num ++; 
    }

    return 0;
}