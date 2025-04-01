// Shaine Ransford
// 2/24/2025
// M4Lab1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{   
    //M4Lab1
    // Variables
    int width = 2;
    int height = 2;

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

    return 0;
}

