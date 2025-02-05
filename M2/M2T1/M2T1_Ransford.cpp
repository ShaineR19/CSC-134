// CSC-134
// M1LAB
// Shaine Ransford
// 1/27/2025
// This program will simulate an apple orchard.

#include <iostream> 
using namespace std;

int main()
{
// The owner’s name
string farm_name = "Ransford";
string user_name;

// number of apples owned
int apples = 100;
int apples_wanted;
// price per apple
double pricePerApple = 0.25;

// calculate the total price of the apples
double totalPrice = apples * pricePerApple;

// Welcome user
cout << "Hello, what's your name? "<< endl;
cin >> user_name;

// print all the information about the orchard
cout << "Welcome to " << farm_name << "’s Apple Orchard " << user_name<< '.'<< endl
     << "We have " << apples << " apples in stock" << endl
     << "Apples are currently $" << pricePerApple << " each." << endl;

// Final line, to print totalPrice
cout << "How many apples would you like? "<< endl;
cin >> apples_wanted;

// Calculate user total
double total = apples_wanted * pricePerApple;

// Display to user
cout<< "Your total for "<< apples_wanted<< ", is $"<< total<< "."<< endl;
cout<< "Have a great day!"<< endl;
}
