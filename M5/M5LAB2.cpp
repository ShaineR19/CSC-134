// Shaine Ransford
// 3/26/2025
// M4T1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
    double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
    // Get the rectangle's length.
    length = getLength();
   
    // Get the rectangle's width.
    width = getWidth();
   
    // Get the rectangle's area.
    area = getArea(length, width);
   
    // Display the rectangle's data.
    displayData(length, width, area);

    // Exit Program   
    return 0;
}

double getLength()
{
    double length = 0;
    cout << "\nEnter the Length of the rectangle:";
    cin >> length;
    // Return Length
    return length;
}

double getWidth()
{
    double width = 0;
    // Get Width
    cout << "\nEnter the Width of the rectangle:";
    cin >> width;
    // Return Width
    return width;
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double length, double width, double area)
{  
    cout << fixed << setprecision(2);
    cout << "\nRectangle Data";
    cout << "\n------------------------";
    cout << "\nLength: "<< length;
    cout << "\nWidth: "<< width;
    cout << "\nArea: "<< area << endl;
}

