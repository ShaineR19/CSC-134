// Shaine Ransford
// 2/24/2025
// M3HW1 - Gold
// CSC-134

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() 
{
 // Question 1
    cout << "Question 1: "<< endl;
    string response;

    cout << endl <<"Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no: " << endl;
    cin >> response;

    if (response == "yes" || response == "Yes") 
    {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    } 
    else if (response == "no" || response == "No") 
    {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    } 
    else 
    {
        cout << "If you’re not sure… that’s OK." << endl;
    }


 // Question 2
    cout << endl <<"Question 2: "<< endl;

    // Variables
    const double TAX = 0.08;
    double meal_price, tip_rate, total;
    bool ordering = true;

    char orderType = '0';
    string food = "burger";
    string place = "In-N-Out";
    string dash24 = "----------------------";

    // Input
    
    cout << endl << "Welcome to "<< place <<"!!"<< endl
         << "How much does your "<< food <<" cost."<< endl;
    cin  >> meal_price;

    while (ordering)
    {
        cout << endl << "Enter 1 if you are dining in or 2 if you are dining out: ";
        cin >> orderType;

        if (orderType == '1')
        {
            cout << endl <<"Thanks for dining in with us!"<< endl;
            tip_rate = 0.15;
            ordering = false;
        }
        else if (orderType == '2')
        {
            cout << endl <<"Enjoy your meal!"<< endl;
            tip_rate = 0;
            ordering = false;
        }    
        else
        {
            cout <<"Please input 1 or 2"<< endl;
        }
    }
    
    // Calculations
    double tip_amount = meal_price * tip_rate;
    double tax_amount = meal_price * TAX;
    total = tax_amount + tip_amount + meal_price;

    // Output
    cout << endl << "RECEIPT"<< endl
         << dash24 << endl

         << fixed << setprecision(2)
         << "SUBTOTAL:\t$"<< meal_price << endl
         << "TAX:\t\t$"<< tax_amount << endl
         << "TIP:\t\t$"<< tip_amount << endl

         << dash24 << endl
         << "TOTAL:\t\t$"<< total << endl;

// Question 3
    cout << endl <<"Question 3: "<< endl;

    char choice;

    cout << endl << "You are walking through a forest and you hear a strange noise." << endl;
    cout << "Do you (a) go towards it or (b) stand still: ";
    cin >> choice;

    if (choice == 'a') 
    {
        cout << "You find a group of poisonous snakes" << endl;
        cout << "Do you (a) fight the snakes or (b) run away? ";
        cin >> choice;

        if (choice == 'b') 
        {
            cout << "You escape the hungry pack of snakes" << endl;
        } 
        else 
        {
            cout << "You get swarmed by snakes and get eaten alive. Game over." << endl;
        }
    } 
    else 
    {
        cout << "A snake comes behind you and bites your neck!!!!" << endl;
    }

// Question 4
    cout << endl <<"Question 4: "<< endl;
  
    srand(time(0));  // Seed random number generator

    int num1 = rand() % 10;  // Random single-digit number 0-9
    int num2 = rand() % 10;  // Random single-digit number 0-9
    int userAnswer;

    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == (num1 + num2)) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is " << (num1 + num2) << "." << endl;
    }
    
}
          