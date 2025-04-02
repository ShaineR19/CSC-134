// Shaine Ransford
// 2/24/2025
// M5HW1 - Gold
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

// Functions
void menu();
void rainfall();
void hyperRectangle();
void romanNumeral();
void shapeCalculator();
void distanceTraveled();


// Main
int main()
{
    bool go = true;
    string input;

    while (go)
    {
        menu();
        cout << "Enter a menu option: ";
        cin >> input;

        if (input == "1")
        {
            rainfall();
        }
        else if (input == "2")
        {
            hyperRectangle();
        }
        else if (input == "3")
        {
            romanNumeral();
        }
        else if (input == "4")
        {
            shapeCalculator();
        }
        else if (input == "5")
        {
            distanceTraveled();
        }
        else if (input == "6")
        {
            cout << "\nExiting Program"<< endl;
            go = false;
        }
        else
        {
            cout << "\nError! Try Again"<< endl;
        }
    }
}

// Define Functions
void menu()
{
    cout << "\nMain Menu" << endl;
    cout << "1) Rainfall" << endl;
    cout << "2) Volume of A HyperRectangle" << endl;
    cout << "3) Roman Numeral" << endl;
    cout << "4) Shape Calculator" << endl;
    cout << "5) Distance Traveled" << endl;
    cout << "6) Exit" << endl;
}

void rainfall()
{
    string month;
    string months[3];
    double rainfall, 
           count, 
           average;
    
    cout << "";
    for (int i=0; i<3; i++)
    {
        cout << "\nEnter Month: ";
        cin >> month;
        cout << "Enter Rainfall in inches: ";
        cin >> rainfall;

        months[i] = month;
        count += rainfall;
    }

    average = count/3;

    cout << setprecision(2);
    cout <<"The average rainfall for "<<months[0]<<", "<<months[1]<<", and "<<months[2]<<" is "<<average<< " inches.\n";
    
}

void hyperRectangle()
{
    cout<< "hello world";
}

void romanNumeral()
{
    cout<< "hello world";
}

void shapeCalculator()
{
    cout<< "hello world";
}

void distanceTraveled()
{
    cout<< "hello world";
}