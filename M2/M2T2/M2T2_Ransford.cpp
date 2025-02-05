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
    const double TAX = 0.08;
    double meal_price = 5.99;
    double total;
    string food = "burger";
    string place = "In-N-Out";
    string dash24 = "----------------------";

    // Calculations
    double tax_amount = meal_price * TAX;
    total = tax_amount + meal_price;

    // Output
    cout << "Welcome to "<< place <<"!!"<< endl
         << "Your "<< food <<" will cost "<< meal_price <<"."<< endl
         << "Thanks for dining with us, here is your receipt!"<< endl
         << endl

         << "RECEIPT"<< endl
         << dash24 << endl

         << setprecision(2)<< fixed 
         << "SUBTOTAL:\t$"<< meal_price << endl
         << "TAX:\t\t$"<< tax_amount << endl

         << dash24 << endl
         << "TOTAL:\t\t$"<< total << endl;
          
}