#include <iostream>

using namespace std;

void mySumProcedure()
{
    int a, b;

    cout << "Enter number: \n";
    cin >> a;
    cout << endl;

    cout << "Enter number: \n";
    cin >> b;
    cout << endl;

    int sum = a + b;

    cout << "********************************\n"
        << sum << endl << endl;
}

int mySumFunction()
{
    int a, b;

    cout << "Enter number: \n";
    cin >> a;
    cout << endl;

    cout << "Enter number: \n";
    cin >> b;
    cout << endl;

    int sum = a + b;

    return sum;
}


int main()
{
    mySumProcedure();

    cout << "*************************************************\n"
        << mySumFunction();
}
