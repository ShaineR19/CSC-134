// CSC-134
// M1LAB
// Shaine Ransford
// 1/27/2025
// This program will print 2 rectangles area

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{   
    // Variables
    double length1,
            width1,
             area1,
           length2,
            width2,
             area2;

    // Set Decimal Places to 2
    cout << setprecision(2) << fixed << showpoint;

    // Rectangle 1 Input
    cout << "What is the length of Rectangle 1? ";
    cin >> length1;
    cout << "What is the width of Rectangle 1? ";
    cin >> width1;

    // Rectangle 2 Input
    cout << endl << "What is the length of Rectangle 2? ";
    cin >> length2;
    cout << "What is the width of Rectangle 2? ";
    cin >> width2;

    // Rectangle Area Calc
    area1 = length1 * width1;
    area2 = length2 * width2;

    // Rectangle Output
    cout << endl << "The area of Rectangle 1 is " << area1 << "." << endl;
    cout << "The area of Rectangle 2 is " << area2 << "." << endl;

    if (area1 == area2)
    {
        cout << endl << "The Rectangles are the same size."<< endl;
    }
    else if (area1 > area2)
    {
        cout << endl << "Rectangle 1 is larger than Rectangle 2" << endl;
    }
    else
    {
        cout << endl << "Rectangle 2 is larger than Rectangle 1" << endl;
    }
    
    

}