// Shaine Ransford
// 2/24/2025
// M4Lab1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;


int main() 
{
    // Loop, user input variable are set before the while loop so they are not iterated over twice
    int number;
    bool invalid = true;

    // Input validation loop
    while (invalid)
    {
        cout << "Enter a number from 1 to 12: ";
        cin >> number;

        if (cin.fail())
        {
            cin.clear(); // clear error flags
            cin.ignore(1000, '\n'); // discard input
        }
        else if (number < 1 || number > 12) 
        {
            cout << "Please enter a valid number between 1 and 12." << endl;
        } 
        else 
        {
            cout << "Printing your times table for "<< number << ". " << endl;
            invalid = false;
        }
    }

    // Counter, table_size variable are set before the while loop so they are not iterated over twice
    int count = 1;
    int table_size = 12;

    // Print times table for the chosen number up to 12 
    while (count <= table_size) 
    {
        int result = number * count;
        cout << number << " times " << count << " is " << result << "." << endl;
        count++;
    }

    return 0;
}
