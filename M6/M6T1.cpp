// Shaine Ransford
// 4/21/2025
// M6T1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

void cars();
void cars_array();

int main()
{
    cars();
    cars_array(); 

    return 0;
}

void cars()
{
    cout << "\nCalculate the average number of cars parked in a parking lot without an array.\n";
    int count = 0;
    double total = 0;
    double average = 0;

    for (int day = 1; day <= 5; day++)
    {
        cout << "Enter the number of cars for the day "<< day <<": ";
        cin>> count;
        total += count;
    }
    
    average = total / 5;
    cout << fixed << setprecision(2);
    cout << "\nThe average number of cars is: " << average << endl;
    cout << "The total number of cars is: " << total << endl;

}

void cars_array()
{
    cout << "\nCalculate the average number of cars parked in a parking lot with an array."<< endl;
    const int DAYS = 5;
    int count[DAYS];
    double total = 0;
    double average = 0;

    for (int day = 0; day < DAYS; day++)
    {
        cout << "Enter the number of cars for the day "<< (day + 1) <<": ";
        cin >> count[day];
        total += count[day];
    }

    average = total / DAYS;
    cout << "\nWeekly Data\n";
    cout << "-----------------\n";
    for (int day = 0; day < DAYS; day++)
    {
        cout << "Day " << (day + 1) << ": " << count[day] << " cars" << endl;
    }
    cout << fixed << setprecision(2);
    cout << "\nThe total number of cars is: " << total << endl;
    cout << "The average number of cars is: " << average << endl;

}