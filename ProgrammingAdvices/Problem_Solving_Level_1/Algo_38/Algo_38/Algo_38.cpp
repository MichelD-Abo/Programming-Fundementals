#include <iostream>

using namespace std;

int counter = 2;

void checkPrime(int num);
bool isLessThanCounterFunction(int num);
bool isDivisibleBy2Function(int num);
bool isLessThanHalfFunction(int num);
int readNumberFunction();


int main()
{
    int num;

    do
    {
        num = readNumberFunction();
    } while (num < 0);

    checkPrime(num);

}

void checkPrime(int num)
{
    if (isLessThanCounterFunction(num))
    {
        cout << "Is Prime\n";
    }
    else if (isDivisibleBy2Function(num) == false)
    {
        if (isLessThanCounterFunction(num))
        {
            cout << "Is Prime.\n";
        }
        else
        {
            ::counter++;
            checkPrime(num);
        }
    }
    else
    {
        cout << "Is Not Prime.\n";
    }
}
bool isLessThanCounterFunction(int num)
{
    if (num <= ::counter)
    {
        return true;
    }

    else
    {
        return false;
    }
}
bool isDivisibleBy2Function(int num)
{
    int remainder = num % 2;

    if (remainder == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
bool isLessThanHalfFunction(int num)
{
    int half = num / 2;

    if (half == ::counter)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int readNumberFunction()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    return num;

}