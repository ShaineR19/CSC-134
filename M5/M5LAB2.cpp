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

int getLength();
int getWidth();
int getArea(int length, int width);
void displayData(int length, int width, int area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
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
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
int getLength()
{
    int length = 0;
    // Get Length
    printf("\nEnter the Length of the rectangle:");
    cin >> length;
    // Return Length
    return length;
}

int getWidth()
{
    int width = 0;
    // Get Width
    printf("\nEnter the Width of the rectangle:");
    cin >> width;
    // Return Width
    return width;
}

void displayData(int length, int width, int area)
{
    printf("\nLength: %i\n", length);
    printf("\nWidth: %i\n", width);
    printf("\nArea: %i\n", area);
}