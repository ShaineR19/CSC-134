// Shaine Ransford
// 3/26/2025
// M4T1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

// Functions
void menu1();
void menu2();
void menu3a();
void menu3b();

int main()
{
    printf("Welcome to the Game of Life\n");

    // Declare go for the while loop and input for user input
    string input;
    int count = 0;
    bool go = true;

    while (go)
    {
        // Give User First Option
        menu1();
        printf("\nProgram is closing...");
        go = false;
    }
}


void menu1()
{
    bool go = true;
    string input;
    int count = 0;

    while (go)
    {
        printf("\n1) Wake Up");
        printf("\n2) Stay in Bed");
        printf("\n3) Exit");
        printf("\nMake a Choice:");
        cin >> input;

        if (input == "1")
        {
            printf("\nYou are awake\n");
            // Give User Second Option
            menu2();  
            go = false;   
        }
        else if (input == "2")
        {
            printf("\nZzzzzzzzzzzzzzzzzz...\n");
            count += 1;
            if (count > 2)
            {
                printf("\nYou sleep all day!");
                go = false;
            }
        }
        else if (input == "3")
        {
            go = false;
        }
        else
        {
            printf("\nYou Tripped!(Wrong Input)\n");
        }
    }
}

void menu2()
{
    string input;
    bool go = true;

    while (go)
    {
        printf("\n1) Brush Your teeth");
        printf("\n2) Pet Your Dog");
        printf("\n3) Exit");
        printf("\nMake a Choice:");

        cin >> input;
        if (input == "1")
        {
            printf("\nYour Teeth are Clean!\n");
            // Give User Third Option
            menu3a();
            go = false;
        }
        else if (input == "2")
        {
            printf("\nYour dog is happy!\n");
            menu3b();
            go = false;
        }
        else if (input == "3")
        {
            go = false;
        }
        else
        {
            printf("You Tripped!(Wrong Input)");
        }
    }
}

void menu3a()
{
    bool go = true;
    string input;

    while (go)
    {
        printf("\n1) Take a Shower");
        printf("\n2) Pet Your Dog");
        printf("\n3) Make Breakfast");
        printf("\n4) Go to the Gym");
        printf("\n5) Exit");
        printf("\nMake a Choice:");
        
        cin >> input;
        if (input == "1")
        {
            printf("\nYour feel Refreshed!\n");
            // Give User Third Option
            go = false;
        }
        else if (input == "2")
        {
            printf("\nYour dog is happy!\n");
            // Give User Third Option
            go = false;
        }
        else if (input == "3")
        {
            printf("\nYou make a bacon, egg, and cheese sandwich!\n");
            // Give User Third Option
            go = false;
        }
        else if (input == "4")
        {
            printf("\nYou feel strong!\n");
            // Give User Third Option
            go = false;
        }
        else if (input == "5")
        {
            go = false;
        }
        else
        {
            printf("You Tripped!(Wrong Input)");
        }
    }
}

void menu3b()
{
    bool go = true;
    string input;

    printf("\n1) Brush Your teeth");
    printf("\n2) Take your dog for a walk");
    printf("\n3) Make Breakfast");
    printf("\n4) Go to the Gym");
    printf("\n5) Exit");
    printf("\nMake a Choice:");

    while (go)
    {
        cin >> input;
        if (input == "1")
        {
            printf("\nYour Teeth are Clean!\n");
            // Give User Third Option
            go = false;
        }
        else if (input == "2")
        {
            printf("\nYou and your dog enjoy the outside!\n");
            // Give User Third Option
            go = false;
        }
        else if (input == "3")
        {
            printf("\nYou make a bacon, egg, and cheese sandwich!\n");
            // Give User Third Option
            go = false;
        }
        else if (input == "4")
        {
            printf("\nYou feel strong!\n");
            // Give User Third Option
            go = false;
        }
        else if (input == "5")
        {
            go = false;
        }
        else
        {
            printf("You Tripped!(Wrong Input)");
        }
    }
}