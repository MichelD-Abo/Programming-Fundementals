#include <iostream>

using namespace std;

float sum = 0;

float sumOfInputedNumbersFunction(float number);
float getNumbersFromUserFunction();
bool is_99Function(float number);



int main()
{
    float num = getNumbersFromUserFunction();
    float sum = sumOfInputedNumbersFunction(num);

    while (is_99Function(num) == false)
    {
        cin >> num;
        sum = sumOfInputedNumbersFunction(num);
    }
    cout << sum;



}

float sumOfInputedNumbersFunction(float number)
{
    if (is_99Function(number) == false)
    {
        ::sum += number;
    }
    return ::sum;
}

float getNumbersFromUserFunction()
{
    float num;
    cout << "Enter number: \n";
    cin >> num;

    return num;
}

bool is_99Function(float number)
{
    if (number == -99)
    {
        return true;
    }
    else
    {
        return false;
    }
}
