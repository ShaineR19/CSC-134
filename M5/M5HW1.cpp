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
double getLength();
double getWidth();
double getHeight();

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
    double length = getLength();
    double width = getWidth();
    double height = getHeight();

    double volume = length * width * height;
    cout<< "\nVolume: "<< volume << endl;
}

double getLength()
{
    double length;
    bool go = true;
    while (go)
    {
        cout<< "\nEnter the length of the Hyper Rectangle: ";
        cin >> length;

        if (length > 0)
        {
            go = false;
        }
        else
        {
            cout << "Error! Enter a number above 0.\n";
        }
    }
    return length;
}

double getWidth()
{
    double width;
    bool go = true;
    while (go)
    {
        cout<< "\nEnter the width of the Hyper Rectangle: ";
        cin >> width;

        if (width > 0)
        {
            go = false;
        }
        else 
        {
            cout << "Error! Enter a number above 0.\n";
        }
    }
    return width;
}

double getHeight()
{
    double height;
    bool go = true;
    while (go)
    {
        cout<< "\nEnter the height of the Hyper Rectangle: ";
        cin >> height;

        if (height > 0)
        {
            go = false;
        }
        else
        {
            cout << "Error! Enter a number above 0.\n";
        }
    }
    return height;
}

void romanNumeral()
{
    int num;
    bool go = true;

    while(go)
    {
        cout<< "\nEnter a number between 1-10: ";
        cin >> num;
        if (num > 10 || num < 1)
        {
            cout << "ERROR: Number out of bounds\n";
        }
        else
        {
            cout << "The Roman numeral version of "<< num << " is: ";
            switch (num)
            {
                case 1: cout << "I"; break;
                case 2: cout << "II"; break;
                case 3: cout << "III"; break;
                case 4: cout << "IV"; break;
                case 5: cout << "V"; break;
                case 6: cout << "VI"; break;
                case 7: cout << "VII"; break;
                case 8: cout << "VII"; break;
                case 9: cout << "IX"; break;
                case 10: cout << "X"; break;
            }
            cout << ".\n";
            go = false;
        }
    }
}

void shapeCalculator()
{
    cout<< "hello world";
}

void distanceTraveled()
{
    cout<< "hello world";
}