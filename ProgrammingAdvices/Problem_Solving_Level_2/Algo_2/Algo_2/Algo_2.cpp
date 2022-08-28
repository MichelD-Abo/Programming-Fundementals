#include <iostream>

using namespace std;

enum enPrimeOrNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int readPositiveNumbers(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;

    } while (number <= 0);

    return number;
}

enPrimeOrNotPrime checkPrime(int number)
{
    int M = round(sqrt(number));

    for (int counter  = 2;  counter <= M; counter++)
    {
        if (number % counter == 0)
            return enPrimeOrNotPrime::NotPrime;
    }
    return enPrimeOrNotPrime::Prime;
}

void printPrimeFrom1ToN(int number)
{
    cout << "\nPrime number from 1 to " << number << endl;

    for (int counter = 1; counter <= number; counter++)
    {
        if (checkPrime(counter) == enPrimeOrNotPrime::Prime)
            cout << counter << endl;
    }
}

int main()
{
    int number = readPositiveNumbers("Enter number larger than 0: ");

    printPrimeFrom1ToN(number);
    return 0;
}