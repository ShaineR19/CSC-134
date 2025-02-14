// CSC-134
// M2HW1 - GOLD
// Shaine Ransford
// 1/27/2025

#include <cstdlib>
#include <iostream> 
#include <iomanip>
using namespace std;

int main() 
{// Question 1
    cout << "Question 1"<< endl;
    cout << "" << endl;
    // Variables
        // Username
        string name = "";
        cout << "What is your name?"<< endl;
        cin >> name;

        // Current Balance
        double balance = 0;
        cout << "What is your current bank balance?"<< endl;
        cin >> balance;

        // Amount Deposited
        double deposit = 0;
        cout << "How much are you depositing?"<< endl;
        cin >> deposit;

        // Amount Withdraing
        double withdrawal;
        cout << "How much are you withdrawing?"<< endl;
        cin >> withdrawal;

    // Processing
        //Balance
        balance += deposit;
        balance -= withdrawal;

        // Account Number
        int account_number = (std::rand() % 10000000) + 9999999;

    // Output
        // Name
        cout << "" << endl;
        cout << "Name: "<< name << endl;

        // Account Number (random)
        cout << "Account Number: "<< account_number << endl;

        // Final Account Balance
        cout << "Balance: $" << balance << endl;
        cout << "" << endl;

    // Question 2
    cout << "Question 2"<< endl;
    cout << "" << endl;

    // CONSTANT VARIABLES
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52; 

    // Variables
    double  length, // The crate's length
            width,  // The crate's width
            height, // The crate's height
            volume, // The volume of the crate
            cost,   // The cost to build the crate
            charge, // The customer charge for the crate
            profit; // The profit made on the crate

    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint; 

    // Prompt the user for crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it,
    // the charge to the customer, and the profit. 
    volume = length * width * height; 
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost; 

    // Display the calculated data.
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n"; 
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    cout << "" << endl;

    // Question 3
    // Pizzas
    cout << "Question 3"<< endl;
    cout << "" << endl;
    // Variables
        int people = 0;
        cout << "How many people are coming to your party?"<< endl;
        cin >> people;

        int pizza = 0;
        cout << "How many pizzas did your order?"<< endl;
        cin >> pizza;

        int slices = 0;
        cout << "How many slices per pizza?"<< endl;
        cin >> slices;

    // Processing
        int slices_needed = people * 3;
        int total_slices = pizza * slices;
        int slice_count = slices_needed - total_slices;

    // Output
        if (slice_count > 0)
        {
            cout << "You need " << abs(slice_count) << " more slices.";
        }
        else
        {
            cout << "You have "<< slice_count <<" slices left.";
        }
    
    // Question 4
    // Strings
    cout << "" << endl;
    cout << "Question 4"<< endl;
    cout << "" << endl;

    // Variables
        string cheer = "Let's go ";
        string school = "FTCC";
        string team = "Trojans";
    
    // Calculations
        string cheerOne = cheer + school;
        string cheerTwo = cheer + team;

    // Output
        cout << cheerOne << endl;
        cout << cheerOne << endl;
        cout << cheerOne << endl;
        cout << cheerTwo << endl;
}
