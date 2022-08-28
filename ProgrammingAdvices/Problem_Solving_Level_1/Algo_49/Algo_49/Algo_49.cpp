#include <iostream>
#include <string>

using namespace std;

int balance = 7500;

void checkPassWordProcedure(string passWord)
{
    if (passWord._Equal("1234"))
    {
        cout << "Your balance is: " << ::balance << endl;
    }
    else
    {
        cout << "\aWrong PIN" << endl;
    }
}

int main()
{
    string pin;

    cout << "Enter your pin code: \n";
    cin >> pin;
    cout << endl;

    checkPassWordProcedure(pin);

    return 0;
}

