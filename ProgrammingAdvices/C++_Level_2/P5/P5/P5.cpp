#include <iostream>
#include <vector>
#include "myLib.h";

using namespace std;

struct stInfo
{
    string firstName = "";
    string lastName = "";
    float salary = 0.0;
};

void fillVectorWithStruct(vector <stInfo> & vInfo)
{
    char addMore = 'y';
    stInfo inf;

    do
    {
        inf.firstName = myLib::readString("\nEnter First Name: ");
        inf.lastName = myLib::readString("Enter Last Name: ");
        inf.salary = myLib::readSalary();

        vInfo.push_back(inf);

        cout << "\n Do You Want To Add More (y\\n)? ";
        cin >> addMore;

    } while (addMore == 'y' || addMore == 'Y');
}

void printVectorWithStruct(vector <stInfo>& vInfo)
{
    cout << "\n\n Vector Info: \n";

    for (stInfo &inf : vInfo)
    {
        cout << " First Name : " << inf.firstName << endl;
        cout << " Last Name  : " <<  inf.lastName << endl;
        cout << " Salary     : " << inf.salary    << endl;
        cout << endl;
    }
}

int main()
{
    vector <stInfo> vInfo;

    fillVectorWithStruct(vInfo);
    printVectorWithStruct(vInfo);

    return 0;
}
