#include <iostream>
#include <string>

using namespace std;

struct stAddress
{
    string city;
    string country;
};

struct stContact
{
    string phone;
    string email;
    stAddress address;
};

struct stPersonInfo
{
    string firstName;
    string lastName;
    unsigned short age;
    float salary;
    stContact contact;
};

void readStPersonInfoProcedure(stPersonInfo &info)
{
    cout << "Enter your first name: " << endl;
    cin >> info.firstName;
    cout << endl;

    cout << "Enter your last name: " << endl;
    cin >> info.lastName;
    cout << endl;

    cout << "Enter your age: " << endl;
    cin >> info.age;
    cout << endl;

    cout << "Enter your monthly salary: " << endl;
    cin >> info.salary;
    cout << endl;

    cout << "Enter your phone number: " << endl;
    cin >> info.contact.phone;
    cout << endl;

    cout << "Enter your email: " << endl;
    cin >> info.contact.email;
    cout << endl;

    cout << "Enter your city: " << endl;
    cin >> info.contact.address.city;
    cout << endl;

    cout << "Enter your country: " << endl;
    cin >> info.contact.address.country;
    cout << endl;
}

void printStPersonInfoProcedure(stPersonInfo info)
{
    cout << "***********************************\n"
        << "Full name: " << info.firstName << " " << info.lastName << endl
        << "Age: " << info.age << endl
        << "Monthly salary: " << info.salary << endl
        << "Yearly salary: " << info.salary * 12 << endl
        << "Phone number: " << info.contact.phone << endl
        << "Email: " << info.contact.email << endl
        << "City: " << info.contact.address.city << endl
        << "Country: " << info.contact.address.country << endl
        << "***********************************\n";
}

int main()
{
    stPersonInfo person1;

    readStPersonInfoProcedure(person1);
    printStPersonInfoProcedure(person1);

    return 0;
}
