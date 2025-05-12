// Shaine Ransford
// 5/12/2025
// M7T2 -  Rectangle Area
// CSC-134
// Use the Rectangle class to calculate area

#include <iostream>
using namespace std;

class Rectangle 
{
  private:
    double width;   // the width
    double length;  // the height

  public:    
    // getters and setters
    void setWidth(double w) 
    {
        width = w; 
    }
    void setLength(double L) 
    {
        length = L;
    }

    double getWidth() const 
    {
        return width;
    }
    double getHeight() const 
    {
        return length;
    }

    // calculate area
    double getArea() const 
    {
        return width * length;
    }
};

int main() 
{
    // Create a rectangle, and its properties, lenght and width
    // Creat a boolean variable to control the while loop
    Rectangle box;
    double width;
    double height;
    bool go = true;

    cout << "M7T2 - Rectangle Area" << endl;
    cout << "This program will calculate the area of a rectangle\n" << endl;
    // Get user width and height and validate length and width are above 0
    while (go)
    {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;

        if (width <= 0 || height <= 0)
        {
            cout << "Width and Height must be greater than 0" << endl;
            cout << "Please try again." << endl;
        }
        else
        {
            go = false; // exit the loop
        }
    }

    box.setWidth(width);
    box.setLength(height);

    // print the area
    cout << "\nRectangle Data" << endl;
    cout << "----------------" << endl;
    cout << "Width: " << box.getWidth() << endl;
    cout << "Height: " << box.getHeight() << endl;
    cout << "Area: " << box.getArea() << endl;
    cout << "----------------\n" << endl;
}