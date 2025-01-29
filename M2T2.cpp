// CSC-134
// M1LAB
// Shaine Ransford
// 1/27/2025
// This program will print a receipt for a transaction

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    // Declare the variables.
    // Calculate the tax amount.
    // Add the tax amount to the total.
    // Display the total to the user.

    // Variables
    const double tax = 0.08;
    double meal_price = 5.99;
    double total;

    // Calculations
    double tax_amount = meal_price * tax;
    total = tax_amount + meal_price;

    // Output
    cout << "Thanks for dining with us, here is your receipt!"<< endl;
    cout << setprecision(2)<< fixed 
         << "Price: "<< meal_price<< endl
         << "  Tax: "<< tax_amount<< endl
         << "Total: "<< total<< endl;
          
}