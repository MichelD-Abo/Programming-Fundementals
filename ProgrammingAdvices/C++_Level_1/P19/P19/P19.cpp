#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo& Info)
{

    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
    cout << endl << endl;

}

void PrintInfo(strInfo Info)
{

    cout << "**********************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "\n**********************************\n\n";


}

void ReadPersonsInfo(strInfo Persons[100], int &length)
{
    cout << "How many persons you want to register, (1-100): ";
    cin >> length;

    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Write person " << i + 1 << " Info: " << endl;
        ReadInfo(Persons[i]);
    }

}

void PrintPersonsInfo(strInfo Persons[100], int length)
{
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Person " << i + 1 << " info: \n";
        PrintInfo(Persons[i]);
    }

}


int main()
{

    strInfo Persons[100];
    int numberOfPersons = 0;

    ReadPersonsInfo(Persons, numberOfPersons);
    PrintPersonsInfo(Persons, numberOfPersons);

    return 0;
}

