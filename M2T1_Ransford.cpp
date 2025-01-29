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
// price per apple
double pricePerApple = 0.25;

// calculate the total price of the apples
double totalPrice = apples * pricePerApple;

// Welcome user
cout << "Hello, what's your name? "<< endl;
cin >> user_name;
cout << "Thanks for coming by "<< user_name << "!"<< endl;

// print all the information about the orchard
cout << "Welcome to " << farm_name << "’s apple orchard." << endl;
cout << "We have " << apples << " apples in stock" << endl;
cout << "Apples are currently $" << pricePerApple << " each." << endl;

// Final line, to print totalPrice
cout << "If you want them all, that will be $" << totalPrice << endl;
}
