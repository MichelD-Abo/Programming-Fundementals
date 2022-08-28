// Algo_35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float pennies, nickels, dimes, quarters, dollars;

    cout << "Welcome to pigg bank!!\n\n";

    cout << "Enter pennies\n";
    cin >> pennies;
    cout << endl;

    cout << "Enter nickels\n";
    cin >> nickels;
    cout << endl;

    cout << "Enter dimes\n";
    cin >> dimes;
    cout << endl;

    cout << "Enter quraters\n";
    cin >> quarters;
    cout << endl;

    cout << "Enter dollars\n";
    cin >> dollars;
    cout << endl;

    float nickleToPennie = nickels * 5;
    float dimeToPennie = dimes * 10;
    float quartToPennie = quarters * 25;
    float dollarToPennie = dollars * 100;
    float pennieTotal = pennies + nickleToPennie + dimeToPennie + quartToPennie + dollarToPennie;
    float penniesTotalToDollar = pennieTotal / 100;

    cout << "******************************************\n";
    cout << "The amount of dollars you have in piggy bank is: " << penniesTotalToDollar << endl << endl;
    cout << "Thanks for using piggy bank!\n";
    cout << "******************************************\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
