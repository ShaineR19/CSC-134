// Shaine Ransford
// 3/26/2025
// M5T1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

void Menu();
void greet_user(char name[]);
int double_number(int num, int num2);

int main() 
{
    printf("Hello User\n");

    Menu();

    char name[] = "User";
    greet_user(name);

    int num = 25;
    int num2 = 19;
    double_number(num, num2);

    return 1;
}

int double_number(int num, int num2)
{
    printf("\nIs this your number? %i \n", num);
    printf("How about this one? %i \n", num2);
}

void Menu()
{
    printf("\nMain Menu\n");
    printf("1.Roll a Dice\n");
}

void greet_user(char name[])
{

    printf("\nHello %s.\n", name);
}
