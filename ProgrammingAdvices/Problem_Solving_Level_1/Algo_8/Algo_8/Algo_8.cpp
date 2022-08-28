#include <iostream>

using namespace std;

void checkGradeProcedure(short grade)
{
    if (grade >= 50)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}

int main()
{
    short grade;

    cout << "Enter your grade\n";
    cin >> grade;
    cout << endl;

    checkGradeProcedure(grade);

    return 0;
}
