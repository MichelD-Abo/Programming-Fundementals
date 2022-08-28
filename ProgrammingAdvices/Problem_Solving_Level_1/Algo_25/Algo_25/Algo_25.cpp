#include <iostream>

using namespace std;


unsigned short readAge()
{
    unsigned short age;

    cout << "Enter your age: ";
    cin >> age;

    return age;
}

bool isValidAgeRange(unsigned short age)
{
    if (age >= 18 && age <= 45)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void giveAgeValidation(unsigned short age)
{
    if (isValidAgeRange(age))
    {
        cout << "Valid.\n";
    }
    else
    {
        cout << "Wrong range.\n";
    }
}

int main()
{
    unsigned short age;

    do
    {
        age = readAge();
        giveAgeValidation(age);

    } while (isValidAgeRange(age) == false);

    return 0;
}
