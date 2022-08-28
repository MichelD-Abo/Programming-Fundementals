#include <iostream>

using namespace std;

string checkNumbers(int number);
bool isEvenNumberFunction(int number);
int readNumberFromUserFunction();
void greetingForUserProcedure();


int main()
{
    int number;


    greetingForUserProcedure();
    number = readNumberFromUserFunction();

    cout << "Number " << number << " is: " << checkNumbers(number);

    return 0;
}

string checkNumbers(int number)
{
    if (isEvenNumberFunction(number))
    {
        return "Even\n";
    }
    else
    {
        return "Odd\n";
    }
}

bool isEvenNumberFunction(int number)
{
    int remainder = number % 2;

    if (remainder == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int readNumberFromUserFunction()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    return number;
}

void greetingForUserProcedure()
{
    cout << "*********************************\n";
    cout << "           Odd\\Even             \n";
    cout << "*********************************\n";
    cout << "Welcome to Odd\\Even program\n";
    cout << "Enter a number: ";

}