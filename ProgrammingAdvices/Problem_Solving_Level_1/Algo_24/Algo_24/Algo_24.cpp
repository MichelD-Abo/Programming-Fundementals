#include <iostream>

using namespace std;


unsigned short readAge()
{
    unsigned short age = 0;

    cout << "Enter your age: \n";
    cin >> age;

    return age;

}

void checkValidAge(unsigned short age, unsigned short from, unsigned short to)
{
    if (age >= from && age <= to)
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    unsigned short age = 0;

    age = readAge();

    checkValidAge(age, 18, 45);

    return 0;
}

