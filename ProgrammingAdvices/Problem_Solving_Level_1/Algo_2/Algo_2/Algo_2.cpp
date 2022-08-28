#include <iostream>
#include <string>

using namespace std;

string readFullNameFunction()
{
    string fullName;

    cout << "Enter your full name: \n";
    getline(cin, fullName);

    return fullName;
}

int main()
{
    string fullName = readFullNameFunction();


    cout << "_________________________________" << endl
        << "Your full name is: " << fullName << endl;

    return 0;
}
