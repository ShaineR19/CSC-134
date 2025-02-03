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
    string food = "burger";
    string place = "In-N-Out";
    string dash23 = "---------------------";
    // Calculations
    double tax_amount = meal_price * tax;
    total = tax_amount + meal_price;

    // Output
    cout << "Welcome to "<<place<<"!!"<< endl;
    cout << "Your "<<food<< " will cost " <<meal_price<<"."<< endl;
    cout << "Thanks for dining with us, here is your receipt!"<< endl;
    cout << endl;

    cout << "RECEIPT"<< endl;
    cout << dash23 << endl;
    cout << setprecision(2)<< fixed 
         << "SUBTOTAL:\t$"<<meal_price<< endl
         << "TAX:\t\t$"<<tax_amount<< endl
         << dash23 << endl
         << "TOTAL:\t\t$"<<total<< endl;
          
}