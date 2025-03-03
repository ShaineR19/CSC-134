// Shaine Ransford
// 2/24/2025
// M3T3
// CSC-134

#include <iostream>
using namespace std;

int main() 
{
    // Declare a variable to store the numerical grade
    int numericalGrade;

    // Prompt the user to enter a numerical grade
    cout << "Enter your numerical grade: ";
    cin >> numericalGrade;

    // Variable to store the letter grade
    char letterGrade;

    // Determine letter grade using if-else statements
    if (numericalGrade >= 90 && numericalGrade <= 100) 
    {
        letterGrade = 'A';
    } 
    else if (numericalGrade >= 80 && numericalGrade <= 89) 
    {
        letterGrade = 'B';
    } 
    else if (numericalGrade >= 70 && numericalGrade <= 79) 
    {
        letterGrade = 'C';
    } 
    else if (numericalGrade >= 60 && numericalGrade <= 69) 
    {
        letterGrade = 'D';
    } 
    else if (numericalGrade >= 0 && numericalGrade <= 59) 
    {
        letterGrade = 'F';
    } 
    else 
    {
        // Handle invalid grades (less than 0 or greater than 100)
        cout << "Invalid grade. Please enter a grade between 0 and 100." << endl;
        return 1;  // Exit the program with an error code
    }

    // Display the letter grade
    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;  // Exit successfully
}
