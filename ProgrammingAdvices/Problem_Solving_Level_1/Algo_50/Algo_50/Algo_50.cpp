#include <iostream>
#include <string>

using namespace std;

int balance = 7500;
unsigned short count = 0;
const unsigned short LIMIT = 3;
string passWord;

void getBalanceProcedure(string pin);
void wrongPinPromptProcedure(string pin);
bool isOverCountLimitFunction(unsigned short count);
bool isRightPinFunction(string pin);
string registerPinFromUserFunction();
string readPinFromUserFunction();

int main()
{
    string pin;

    ::passWord = registerPinFromUserFunction();
    pin = readPinFromUserFunction();

    getBalanceProcedure(pin);


    return 0;
}

void getBalanceProcedure(string pin)
{
    if (isRightPinFunction(pin))
    {
        cout << "Your balance is: " << ::balance << endl;
    }
    else
    {
        wrongPinPromptProcedure(pin);
    }
}
void wrongPinPromptProcedure(string pin)
{
    cout << "\aWrong Pin: ";
    ::count++;
    if (isOverCountLimitFunction(::count))
    {
        cout << "Card is locked\n";
        system("color 4F");
    }
    else
    {
        getBalanceProcedure(readPinFromUserFunction());
    }
}
bool isOverCountLimitFunction(unsigned short count)
{
    if (count == ::LIMIT)
    {
        return true;
    }
    else
    {
        return false;
    }

}
bool isRightPinFunction(string pin)
{
    if (pin._Equal(::passWord))
    {
        return true;
    }
    else
    {
        return false;
    }
}
string readPinFromUserFunction()
{
    string pin;

    cout << "Enter PIN: ";
    cin >> pin;

    return pin;
}
string registerPinFromUserFunction()
{
    cout << "Register your Pin: ";
    cin >> ::passWord;

    return ::passWord;
}
