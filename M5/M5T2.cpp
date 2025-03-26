// Shaine Ransford
// 3/26/2025
// M4T1
// CSC-134

#include <iostream>
#include <iomanip>
using namespace std;

void square(int num1);
void print_answer(int value1, int value);

int main() 
{
    printf("Hello User\n");
    printf("Lets square some numbers!\n");

    printf("\nWhat is your favorite number: ");
    int max;
    cin >> max;

    for (int i = 0; i <= max; i++)
    {
        printf("");
        square(i);
    }

    return 0;
}

void square(int num)
{
    int value = num * num;
    print_answer(num, value);
}

void print_answer(int num, int value)
{
    printf("%i - Square Value: %i\n", num, value);
}