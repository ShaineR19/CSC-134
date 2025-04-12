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
void shape_menu();
void circle_area();
void rectangle_area();
void triangle_area();

void distanceTraveled();
double getSpeed();
int getHours();


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
        cout<< "\nEnter the length of the Rectangle: ";
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
        cout<< "\nEnter the width of the Rectangle: ";
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
        cout<< "\nEnter the height of the Rectangle: ";
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
    string choice;
    bool go = true;

    while(go)
    {
        shape_menu();
        cout << "Enter a menu option: ";
        cin >> choice;

        if (choice == "1")
        {
            circle_area();
        }
        else if (choice == "2")
        {
            rectangle_area();
        }
        else if (choice == "3")
        {
            triangle_area();
        }
        else if (choice == "4")
        {
            cout << "Returning to Main Menu...\n";
            return;
        }
        else
        {
            cout << "ERROR: Option not available. Try again\n";
        }
    }
}

void shape_menu()
{
    cout << "\nShape Menu\n";
    cout << "1) Calculate the Area of a Circle\n";
    cout << "2) Calculate the Area of a Rectangle\n";
    cout << "3) Calculate the Area of a Triangle\n";
    cout << "4) Exit\n";
}

void circle_area()
{
    double radius;
    double area;

    cout << "\nWhat is the radius of your circle: ";
    cin >> radius;

    if (radius <= 0)
    {
        cout << "Radius cannot be negative.";
        return;
    }
    else if (radius > 0)
    {
        area = 3.14 * (radius * radius);
        cout << "Circle Area is " << area << ".\n";
        return;
    }
}

void rectangle_area()
{
    double length = getLength();
    double width = getWidth();
    double area = length * width;
    
    cout << "Rectangle Area is " << area << ".\n";
    return;
}

void triangle_area()
{
    double height;
    double base;

    cout << "\nWhat is the height of your triangle: ";
    cin >> height;
    if (height <= 0)
    {
        cout << "Height cannot be negative.\n";
        return;
    }
    else if (height > 0)
    {
        cout << "\nWhat is the base of your triangle: ";
        cin >> base;

        if (base <= 0)
        {
            cout << "Base cannot be negative.\n";
            return;
        }
        else if (base > 0)
        {
            double area = (height * base) / 2;
            cout << "Triangle Area is " << area << ".\n";
        }
    }
    return;
}

void distanceTraveled()
{
    bool go = true;

    double speed = getSpeed();
    int hours = getHours();
    cout << "Hour   |Distance Traveled\n";
    cout << "-------------------------\n";
    for (int i = 1; i <= hours; i++)
    {
        double distance = i * speed;
        cout << i <<"       "<< distance << endl;
    }
}

double getSpeed()
{
    double speed;
    bool go = true;
    
    while (go)
    {
        cout << "\nWhat is the speed of the vehicle in MPH: ";
        cin >> speed;

        if (speed < 0)
        {
            cout << "ERROR: Speed cannot be negative.";
        }
        else
        {
            go = false;
        }
    }
    return speed;
}

int getHours()
{
    int hours;
    bool go = true;

    while (go)
    {
        cout << "\nHow many hours has it traveled: ";
        cin >> hours;

        if (hours < 1)
        {
            cout << "ERROR: Hours cannot be negative.";
        }
        else
        {
            go = false;
        }
    }
    return hours;
}