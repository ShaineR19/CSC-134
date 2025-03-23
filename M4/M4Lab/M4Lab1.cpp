// Shaine Ransford
// 2/24/2025
// M4Lab1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

// To Mr Norris, 
// I'm currently in your data structures class and I know it isn't the point of this assignment
// but I want to try this assignment recursively. The function for this assignmenthas a runtime of O(N^2).

// the variable current_width tracks the current position in the row similiar to [i] in a for loop
void recursive_asterisk(int height, int width, int current_width = 0)
{
    // Base Case or no more rows left
    if (height == 0) return;

    if (current_width < width)
    {
        cout<< "* ";
        // Prints the rest of the row
        recursive_asterisk(height, width, current_width + 1);
    }
    else
    {
        cout << endl;
        // Moves the function to the next row
        recursive_asterisk(height - 1,  width);
    }
}

int main() 
{   
    //M4Lab1
    // Variables
    int width = 50;
    int height = 50;

    // Calculations/Output
    for (int i=0; i < width; i++) 
    {
        for (int j=0; j < height; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout<< endl;
    recursive_asterisk(height, width);

    return 0;
}

