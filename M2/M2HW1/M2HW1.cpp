// CSC-134
// M2HW1 - GOLD
// Shaine Ransford
// 1/27/2025

#include <cstdlib>
#include <iostream> 
using namespace std;

int main() 
{
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

}
